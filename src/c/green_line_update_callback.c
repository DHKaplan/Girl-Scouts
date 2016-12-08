#include <pebble.h>

#include "green_line_update_callback.h"

#include "Girl-Scouts.h"


void red_line_layer_update_callback(Layer *RedLineLayer, GContext* ctx) { 
         
     #if PBL_COLOR
         graphics_context_set_fill_color(ctx, GColorMalachite);
     #else 
         //B&W
         graphics_context_set_fill_color(ctx, GColorWhite);
     #endif
       
     graphics_fill_rect(ctx, layer_get_bounds(RedLineLayer), 0, GCornerNone);
}