#include <iostream>
#include <memory>
using namespace std;

class Student {
public:
    string name;

    Student(string n) {
        name = n;
        cout << "Constructor called" << endl;
    }

    ~Student() {
        cout << "Destructor called" << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    unique_ptr<Student> s =
        make_unique<Student>("Kavya");

    s->display();

    return 0;
}