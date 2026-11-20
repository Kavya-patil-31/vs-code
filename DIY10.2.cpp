#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream in("in.txt");
    ofstream out("out.txt");

    string line;
    int count = 1;

    while (getline(in, line)) {
        out << count << ". " << line << endl;
        count++;
    }

    in.close();
    out.close();

    cout << "File copied successfully";

    return 0;
}