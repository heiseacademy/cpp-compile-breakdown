int g = 2;

int bar();
int foo(int x) {
	int result = x*bar();
	return result;
}

//void* barPointer = bar;
int (*barPointer)(void) = &bar;
typedef int barType (void);

/*float foof(float x) {
	float result = x*2;
	return result;
}

int main() {
	int x = bar();
	return x;
}
*/

float foof(float x) {
	float result = x*2;
	return result;
}
int main() {
	int x = bar();
	return x;
}
