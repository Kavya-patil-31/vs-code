#include <iostream>
using namespace std;

class Shape {
protected:
    string color;

public:
    Shape(string c) {
        color = c;
        cout << "Shape constructor called" << endl;
    }
};

class Polygon : public Shape {
protected:
    int sides;

public:
    Polygon(string c, int s) : Shape(c) {
        sides = s;
        cout << "Polygon constructor called" << endl;
    }
};

class Rectangle : public Polygon {
    int length, breadth;

public:
    Rectangle(string c, int s, int l, int b)
        : Polygon(c, s) {
        length = l;
        breadth = b;
        cout << "Rectangle constructor called" << endl;
    }

    void display() {
        cout << "Color: " << color << endl;
        cout << "Sides: " << sides << endl;
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area: " << length * breadth << endl;
    }
};

int main() {
    Rectangle r("Red", 4, 10, 5);

    cout << "\nRectangle Details:" << endl;
    r.display();

    return 0;
}