#include <iostream>
#include <numeric>
using namespace std;

class Fraction {
    int num, den;

public:
    Fraction(int n = 0, int d = 1) {
        if (d == 0) {
            cout << "Invalid denominator!";
            den = 1;
            num = 0;
            return;
        }

        int g = gcd(n, d);

        num = n / g;
        den = d / g;

        if (den < 0) {
            num = -num;
            den = -den;
        }
    }

    friend istream& operator>>(istream& in, Fraction& f) {
        int n, d;
        in >> n >> d;
        f = Fraction(n, d);
        return in;
    }

    friend ostream& operator<<(ostream& out, Fraction f) {
        out << f.num << "/" << f.den;
        return out;
    }
};

int main() {
    Fraction f;

    cout << "Enter numerator and denominator: ";
    cin >> f;

    cout << "Simplified Fraction: " << f << endl;

    return 0;
}