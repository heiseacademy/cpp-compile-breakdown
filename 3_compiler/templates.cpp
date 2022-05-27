template<typename T> T multiply(T x, T y);

int main() {
    float x = multiply(2.0f, 3.0f);
    float y = multiply(3.0f, 4.0f);
    int result = multiply(4, 5);
    return 0;
}

template<typename T> T multiply(T x, T y) {
    return x * y;
}