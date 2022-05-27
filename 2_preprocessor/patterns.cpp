#ifndef FILENAME_H
#define FILENAME_H

// file content...

#endif // FILENAME_H









#if 0 // For nested commenting

/* This is some code */
int foo() {
#if 0
    return 42;
#endif
    return 27;
}

#endif



#ifdef _WIN32
// Code
#elif defined(__gnu_linux__)
// Code
#else
#error Platform not supported
#endif


#define ARRAY_COUNT(a) (sizeof(a)/sizeof(*(a)))




// Debug not set in every compiler. !defined(__OPTIMIZE__) is another option
#ifdef _DEBUG
#define MY_APPLICATION_DEBUG
#endif




// Define with -DMY_APPLICATION_DEBUG as compile flag
#if MY_APPLICATION_DEBUG
// Do additional debug things...
int x = 0;
#endif

