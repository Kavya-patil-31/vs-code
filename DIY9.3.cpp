#include <iostream>
using namespace std;

class MathError {};
class DivideByZero : public MathError {};

int main() {

    try {
        throw DivideByZero();
    }
    catch (DivideByZero) {
        cout << "Divide By Zero caught" << endl;
    }
    catch (MathError) {
        cout << "Math Error caught" << endl;
    }

    return 0;
}