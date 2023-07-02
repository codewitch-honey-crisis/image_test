#pragma once
#include "lcd_config.h"
#include <gfx.hpp>
#include <uix.hpp>

#ifdef LCD_DMA
constexpr static const size_t lcd_buffer_size = 32*1024;
#else
constexpr static const size_t lcd_buffer_size = 32*1024*2;
#endif

extern const gfx::open_font& text_font;

using screen_t = uix::screen_ex<LCD_WIDTH,LCD_HEIGHT,LCD_FRAME_ADAPTER,LCD_X_ALIGN,LCD_Y_ALIGN>;

using color_t = gfx::color<typename screen_t::pixel_type>;
using color32_t = gfx::color<gfx::rgba_pixel<32>>;

using label_t = uix::label<screen_t::control_surface_type>;
using canvas_t = uix::canvas<screen_t::control_surface_type>;

typedef enum struct wifi_display_status {
    scanning = 0,
    connected_file = 1,
    connected_wps = 2,
    connected_bluetooth = 3
} wifi_display_status_t;

extern screen_t main_screen;
extern label_t hello_label;
extern canvas_t image_canvas;

extern void main_screen_init();