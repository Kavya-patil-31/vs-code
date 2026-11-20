#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {
        cout << "Base destructor called" << endl;
    }
};

class Derived : public Base {
    int *p;

public:
    Derived() {
        p = new int[5];
        cout << "Memory allocated" << endl;
    }

    ~Derived() {
        delete[] p;
        cout << "Derived destructor called" << endl;
    }
};

int main() {
    Base *b = new Derived();

    delete b;

    return 0;
}