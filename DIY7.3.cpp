#include <iostream>
using namespace std;

class Person {
public:
    string name;

    Person(string n) {
        name = n;
    }
};

class Student : virtual public Person {
public:
    int marks;

    Student(string n, int m) : Person(n) {
        marks = m;
    }
};

class Employee : virtual public Person {
public:
    int salary;

    Employee(string n, int s) : Person(n) {
        salary = s;
    }
};

class TA : public Student, public Employee {
public:
    TA(string n, int m, int s)
        : Person(n), Student(n, m), Employee(n, s) {}

    void display() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    TA t("Kavya", 90, 20000);
    t.display();

    return 0;
}