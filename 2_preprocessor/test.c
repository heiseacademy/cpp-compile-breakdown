#define TEST 1

#define TEST2

// TEST => 1
int value = TEST;

int getNumber() {
#if TEST

    // Stays in code
    int x = TEST;

#else

    // Is removed by preprocessor
    int x = 0;

#endif
    return x;
}




#if defined TEST2

// Stays in code

#elif !defined TEST

// Is removed by preprocessor

#elif 1

// Is removed by preprocessor

#else

// Is removed by preprocessor

#endif

#undef TEST2

#if defined TEST2

// Is removed by preprocessor

#endif

#ifdef TEST2

// Is removed by preprocessor

#elif defined TEST

// Stays in code

#endif




#define TEST3 int x = 0; \
return x

int main() {
    TEST3;
}