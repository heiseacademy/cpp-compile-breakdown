#define DEMAND_NAME wayland
//#define DEMAND_REPORT_ERROR(name) printf("Custom error: %s\n", #name)
//#define DEMAND_NO_ERROR_REPORT
//#define DEMAND_PREFIX dl_
//#define DEMAND_NO_DL
#define DEMAND_ALWAYS_REPORT
//#define DEMAND_REPORT_CHECKED_ERROR(name) printf("Checked error: %s\n", #name)
#include "demand_load.h"

#include <unistd.h>
#include <stdio.h>
#include <dlfcn.h>
//#include <wayland-client.h>

#ifdef DEMAND_IMPLEMENTATION
DEMAND_DEFINE_RESOLVE() {
    const char* waylandLibrary = "libwayland-client.so";
    static void* lib = 0;
    if(!lib) {
        lib = dlopen(waylandLibrary, RTLD_LAZY);
    }
    if(!lib) {
        printf("Error opening wayland library\n");
        return 0;
    }
    void* symbol = dlsym(lib, name);
    if(!symbol) printf("Error resolving %s\n", name);
    return symbol;
}
#endif

//struct wl_display;
//DEMAND_FUNCTION(struct wl_display*, wl_display_connect, (const char *name), (name));
DEMAND_FUNCTION_ERR(struct wl_display*, wl_display_connect, (const char *name), (name), 0);

#undef DEMAND_NAME
#define DEMAND_NAME xcb
#ifdef DEMAND_IMPLEMENTATION
DEMAND_DEFINE_RESOLVE() {
    printf("Resolve XCB\n");
    const char* xcbLibrary = "libxcb.so";
    static void* lib = 0;
    if(!lib) {
        lib = dlopen(xcbLibrary, RTLD_LAZY);
    }
    if(!lib) {
        return 0;
    }
    void* symbol = dlsym(lib, name);
    return symbol;
}
#endif

DEMAND_FUNCTION_ERR(struct xcb_connection_t *, xcb_connect, (const char *display, int *screen ), (display, screen), 0);