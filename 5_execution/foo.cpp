#include <cstdio>

int g = 2;

int bar();
int foo(int x) {
	int result = x*bar();
	return result;
}

float foof(float x) {
	float result = x*2;
	return result;
}
int main() {
	int x = bar();
	printf("Hello World\n");
	return x;
}
