#include <cstdlib>

extern "C" {
    // x86-64 only!
    void exit(int code) {
        unsigned long ret;
        while(1) { asm volatile (
            "syscall"
            : "=a" (ret)
            : "a" (60l), "D" ((long)code)
            : "rcx", "r11", "memory");
        }
    }

    void _start(void) {
        exit(1);
    }
}