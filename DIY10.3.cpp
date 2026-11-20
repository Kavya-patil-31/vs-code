#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    string name;
    int marks;
};

int main() {
    Student s[3];

    ofstream out("student.txt");

    out << "Rahul 80\n";
    out << "Kavya 95\n";
    out << "Anu 85\n";

    out.close();

    ifstream in("student.txt");

    int topper = 0;

    for (int i = 0; i < 3; i++) {
        in >> s[i].name >> s[i].marks;

        if (s[i].marks > s[topper].marks)
            topper = i;
    }

    in.close();

    cout << "Topper: " << s[topper].name << endl;
    cout << "Marks: " << s[topper].marks << endl;

    return 0;
}