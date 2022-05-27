#include "header.h"

static int getValue(int r) {
    return 42 + r;
}

int g = 2;

int bar();

int foo(int x) {
	int result = x*bar() + getValue(2);
	return result;
}

int main() {
	int b = foo(27);
	int x = bar();
	return x;
}
