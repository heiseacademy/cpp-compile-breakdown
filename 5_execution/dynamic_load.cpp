#include <iostream>
#include <dlfcn.h>

using namespace std;

int main() {
    void* lib = dlopen("./libcustom.so", RTLD_NOW);
    if(!lib) {
        cout << "Error loading library: " << dlerror() << endl;
        return 1;
    }

    //IMPORTANT: Name mangling with c++ libraries
    int(*putsPointer)(const char*) = (int(*)(const char*)) dlsym(lib, "puts");
    if(putsPointer) {
        return putsPointer("");
    }

    dlclose(lib);
    return 1;
}