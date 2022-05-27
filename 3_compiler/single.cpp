
#if 0
template<typename T>
T multiply2(T x, T y) {
    return x * y;
}
int multiply(int x, int y) {
    return multiply2(x, y);
}
#else
int multiply(int x, int y) {
    return x * y;
}
#endif

// 4MiB .bss
int data[1024*1024];

// 4MiB .data
int data2[1024*1024] = {1};

const int data3 = 4;
const int* p = &data3;

int fib(int x) {
    if(x == 0) return 0;
    if(x == 1) return 1;
    return fib(x-1) + fib(x-2);
}

/*int main() {
    const int* p = &data3;
    int* p2 = (int*) p;
    *p2 = 2;
    return 0;
}*/