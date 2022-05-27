#include <cstdio>

#define MIN(a, b) (a < b ? a : b)
#define PLUS(a, b) (a + b)
#define PRINTLN(...) printf(__VA_ARGS__); printf("\n")
#define STRINGIFY(s) (#s)
#define EXPAND_AND_STRINGIFY(s) STRINGIFY(s)
#define MY_NAME(name) prefix_##name##_postfix

// Macro in Macro

int main() {
    int value = 2 * PLUS(2, 4);
    int value2 = MIN(3, 6);
    PRINTLN("Test");
    const char* name = EXPAND_AND_STRINGIFY(MY_NAME(name));
    PRINTLN(name);
    int MY_NAME(my_name) = 2;
    return 0;
}