#include <iostream>

using namespace std;


#define _LOG(message, file, line) cout << file << ":" << line << ": " message << endl
#define LOG(message) _LOG(message, __FILE__, __LINE__)

int main() {
    cout << "My application. Builddate: " << __DATE__ << " at " << __TIME__ << endl;
    LOG("Hello World");

#ifdef _WIN32 
    #error This application can not be built
#endif
    return 0;
}