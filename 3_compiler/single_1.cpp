int multiply(int x, int y) {
    return x * y;
}

// 4MiB .bss
int data[1024*1024];

// 4MiB .data
int data2[1024*1024] = {1};

const int data3[1024*1024] = {};