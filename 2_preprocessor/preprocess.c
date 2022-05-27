

#define TEST

#if defined(TEST)
int x = 0;
#endif

#ifdef TEST2
int y = 0;
#endif

#define TEST2 1

#ifdef TEST2
int z = 0;
#endif

#ifndef TEST2
int u = 0;
#endif

#if !defined(TEST)
int v = 0;
#endif

#if TEST2
int a = 0;
#endif

#if 1
int b = 0;
#elif 1
int c = 1;
#else
int b = 2;
#endif

#if (2+5)
int c = 0;
#endif

// # muss der erste non-whitespace character sein.
// Einrückung also möglich. Aber sehr unüblich. Vermutlich, da det Preprocessor das Nesting nicht beachtet
//TODO: #line 10 test.c Can be used to set line number and file reporting
//TODO: #error Report custom error message. No macro expansion
//TODO: __VA_ARGS__
//TODO: #pragma // Especially #pragma once. Also explain the standard single inclusion pattern with #ifndef #define #endif
// See here for expansion https://stackoverflow.com/questions/5256313/c-c-macro-string-concatenation
/*
include guard idiom
#define EMPTY
EMPTY # include <file.h>
No include because # is not the first in the line
*/