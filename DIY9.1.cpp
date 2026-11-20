#include <iostream>
using namespace std;

class InsufficientFunds {
public:
    string message;

    InsufficientFunds(string msg) {
        message = msg;
    }
};

class BankAccount {
    int balance;

public:
    BankAccount(int b) {
        balance = b;
    }

    void withdraw(int amount) {
        if (amount > balance)
            throw InsufficientFunds("Insufficient Balance!");

        balance -= amount;
        cout << "Withdrawal successful" << endl;
        cout << "Remaining Balance: " << balance << endl;
    }
};

int main() {
    BankAccount b(5000);

    try {
        b.withdraw(6000);
    }
    catch (InsufficientFunds e) {
        cout << "Error: " << e.message << endl;
    }

    return 0;
}