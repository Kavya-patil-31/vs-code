#include <iostream>
#include <fstream>
using namespace std;

class Logger {
public:
    virtual void write(string msg) = 0;
    virtual ~Logger() {}
};

class ConsoleLogger : public Logger {
public:
    void write(string msg) {
        cout << "Console: " << msg << endl;
    }
};

class FileLogger : public Logger {
public:
    void write(string msg) {
        ofstream file("log.txt");
        file << msg;
        file.close();
        cout << "Message written to file" << endl;
    }
};

int main() {
    ConsoleLogger c;
    FileLogger f;

    Logger* log;
    int choice;

    cout << "1. Console Logger\n2. File Logger\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1)
        log = &c;
    else
        log = &f;

    log->write("Hello World");

    return 0;
}