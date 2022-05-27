#include <cstdio>

class Foo {
public:
    virtual void hello() = 0;
    void print() {
        printf("Print in Foo\n");
    }
    virtual void print2() {
        printf("Print2 from Foo\n");
    }
};

class Foo2 {
public:
    void hello2() {
        printf("Hello2 from Foo2\n");
    }
};

class Bar : public Foo, public Foo2 {
public:
    void hello() override {
        printf("Hello from Bar\n");
        return;
    }
    void hello2() {
        printf("Hello2 from Bar\n");
    }
    void print() {
        printf("Print in Bar\n");
    }
    void print2() override {
        printf("Print2 from Bar\n");
    }
};

void call(Foo* foo) {
    foo->print();
    foo->print2();
    foo->hello();
}

void call2(Foo2* foo) {
    foo->hello2();
}

int main() {
    Bar bar;
    call(&bar);
    call2(&bar);
    bar.hello2();
    bar.print();
    bar.Foo::print();
    bar.print2();
    bar.Foo::print2();
    printf("sizeof(Foo) = %zu\n", sizeof(Foo));
    printf("sizeof(Foo2) = %zu\n", sizeof(Foo2));
    printf("sizeof(bar) = %zu\n", sizeof(bar));
}
















// Base
// vtable pointer
// int a

// vtable
// f2 = 0
class Base {
    int a;
    int f1() { return 0;};
    virtual int f2() = 0;
};

// Derived
// vtable pointer
// int a
// int b

// vtable
// f2 = Derived::f2
// f3 = 0;
class Derived : public Base {
    int b;
    int f2() override {return 27;}
    virtual void f3(int) = 0; 
};

// Base2
// vtable pointer
// int b
class Base2 {
    int b;
    virtual int f3() {return 42;}
};

// MultipleDerived
// vtable pointer
// int a;
// vtable pointer2
// int b;

// vtable
// f2 = 0
// f4 = 0

// vtable2
// f3 = MultipleDerived::f3
class MultipleDerived : public Base, Base2 {
    int f3() override {return -1;}
    virtual void f4() = 0;
};