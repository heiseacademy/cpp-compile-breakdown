#include <iostream>

using namespace std;

int main() {
    void* address = (void*)&main;
    cout << "Address of main function: " << address << endl;
    return 0;
}