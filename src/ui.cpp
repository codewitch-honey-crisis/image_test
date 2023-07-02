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
#define CLOUD_IMPLEMENTATION
#include <assets/cloud.hpp>
#define PNG_DEMO_IMPLEMENTATION
#include <assets/png_demo.hpp>

using namespace gfx;
using namespace uix;

#ifdef LCD_DMA
static uint8_t lcd_buffer1[lcd_buffer_size];
static uint8_t lcd_buffer2[lcd_buffer_size];
#else
static uint8_t lcd_buffer1[lcd_buffer_size];
static uint8_t lcd_buffer2 = nullptr;
#endif

#ifdef LCD_DMA
static bool lcd_flush_ready(esp_lcd_panel_io_handle_t panel_io, 
                            esp_lcd_panel_io_event_data_t* edata, 
                            void* user_ctx) {
    main_screen.set_flush_complete();
    return true;
}
#endif

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

static void wifi_icon_on_paint(canvas_t::control_surface_type& destination, 
                    const gfx::srect16& clip, 
                    void* state) {
    png_demo.seek(0);
    draw::image(destination,destination.bounds(),&png_demo);
}

static void type_icon_on_paint(canvas_t::control_surface_type& destination, 
                    const gfx::srect16& clip, 
                    void* state) {
   
}

wifi_display_status_t wifi_status = wifi_display_status_t::scanning;

screen_t main_screen(lcd_buffer_size,lcd_buffer1,lcd_buffer2,nullptr);

label_t status_label(main_screen);
canvas_t wifi_icon(main_screen);
canvas_t type_icon(main_screen);

void main_screen_init() {
    main_screen.on_flush_callback(uix_flush);
    main_screen.background_color(color_t::purple);
    wifi_icon.bounds(main_screen.bounds());
    wifi_icon.on_paint(wifi_icon_on_paint);
    main_screen.register_control(wifi_icon);
#ifdef LCD_PIN_NUM_VSYNC
    lcd_panel_init();
#else
    lcd_panel_init(lcd_buffer_size,lcd_flush_ready);
    main_screen.validate_all();
    main_screen.invalidate();
#endif
}