#define DEMAND_IMPLEMENTATION
#include "libs.h"

int main() {
    struct wl_display* display = wl_display_connect(0);
    struct xcb_connection_t *connection = xcb_connect(0, 0);
    //connection = xcb_connect(0, 0);
    if(display) return 0;
    return 1;
}

/*
#include "libs.h"

void test() {
    struct xcb_connection_t *connection = xcb_connect(0, 0);
}
*/