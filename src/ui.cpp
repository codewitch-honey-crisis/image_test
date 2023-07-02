#include <ui.hpp>
#define LCD_IMPLEMENTATION
#include <lcd_init.h>
// font downloaded from https://yoworks.com/yofonts/free.html
// header made with https://honeythecodewitch.com/gfx/converter
#define TELEGRAMA_IMPLEMENTATION
#include <assets/telegrama.hpp>
const gfx::open_font& text_font = telegrama;
// icons generated with https://honeythecodewitch.com/gfx/iconPack
#define ICONS_IMPLEMENTATION
#include <assets/icons.hpp>
// header made with https://honeythecodewitch.com/gfx/converter
#define CLOUD_IMPLEMENTATION
#include <assets/cloud.hpp>
// header made with https://honeythecodewitch.com/gfx/converter
#define PNG_DEMO_IMPLEMENTATION
#include <assets/png_demo.hpp>

using namespace gfx;
using namespace uix;

// we use two buffers if there is DMA
// that way we can write to one while
// the other is transferring in the
// background.
#ifdef LCD_DMA
static uint8_t lcd_buffer1[lcd_buffer_size];
static uint8_t lcd_buffer2[lcd_buffer_size];
#else
static uint8_t lcd_buffer1[lcd_buffer_size];
static uint8_t lcd_buffer2 = nullptr;
#endif

// indicates when the pending flush has completed
// only applies with DMA
#ifdef LCD_DMA
static bool lcd_flush_ready(esp_lcd_panel_io_handle_t panel_io, 
                            esp_lcd_panel_io_event_data_t* edata, 
                            void* user_ctx) {
    // indicate to UIX that the buffer is now free to write
    main_screen.set_flush_complete();
    return true;
}
#endif

// draws to the display
static void uix_flush(const rect16& bounds, 
                    const void* bmp, 
                    void* state) {
    lcd_panel_draw_bitmap(bounds.x1, 
                        bounds.y1, 
                        bounds.x2, 
                        bounds.y2,
                        (void*) bmp);
    // no DMA, so we are done once the above completes
#ifndef LCD_DMA
    main_screen.set_flush_complete();
#endif
}

static void image_canvas_on_paint(canvas_t::control_surface_type& destination, 
                    const gfx::srect16& clip, 
                    void* state) {
    // draw::image doesn't seek because it may be a download
    // we have to seek in case multiple calls are made to draw cloud
    cloud.seek(0);
    // draw the jpg
    draw::image(destination,destination.bounds(),&cloud);
    png_demo.seek(0);
    // draw the png
    draw::image(destination,destination.bounds(),&png_demo);
}

screen_t main_screen(lcd_buffer_size,lcd_buffer1,lcd_buffer2);

label_t hello_label(main_screen);
canvas_t image_canvas(main_screen);

void main_screen_init() {
    main_screen.on_flush_callback(uix_flush);
    main_screen.background_color(color_t::purple);
    image_canvas.bounds(main_screen.bounds());
    image_canvas.on_paint(image_canvas_on_paint);
    main_screen.register_control(image_canvas);
    // declare RGBA8888 with no alpha
    rgba_pixel<32> transparent(0,0,0,0);
    hello_label.bounds(main_screen.bounds());
    hello_label.text_open_font(&text_font);
    hello_label.border_color(transparent);
    hello_label.background_color(transparent);
    hello_label.text_color(color32_t::antique_white);
    hello_label.text_line_height(main_screen.dimensions().height/2.5);
    hello_label.text_justify(uix_justify::center);
    hello_label.padding({0,0});
    hello_label.text("Hello!");
    main_screen.register_control(hello_label);
#ifdef LCD_PIN_NUM_VSYNC
    lcd_panel_init();
#else
    lcd_panel_init(lcd_buffer_size,lcd_flush_ready);
#endif
}