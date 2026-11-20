#include <iostream>
using namespace std;

class Account {
public:
    virtual void calculateInterest() = 0;
    virtual ~Account() {}
};

class Savings : public Account {
public:
    void calculateInterest() {
        cout << "Savings Interest: "
             << 10000 * 0.05 << endl;
    }
};

class Current : public Account {
public:
    void calculateInterest() {
        cout << "Current Interest: "
             << 10000 * 0.02 << endl;
    }
};

int main() {
    Savings s;
    Current c;

    Account* a[2] = {&s, &c};

    for (int i = 0; i < 2; i++) {
        a[i]->calculateInterest();
    }

    return 0;
}