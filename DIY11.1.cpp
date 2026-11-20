#include <iostream>
using namespace std;

template <class T>
void swapVals(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template <class T>
T findMax(T arr[], int n) {
    T max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int main() {
    int a = 10, b = 20;

    swapVals(a, b);
    cout << "After swapping integers: " << a << " " << b << endl;

    int x[] = {10, 50, 30};
    cout << "Maximum integer: " << findMax(x, 3) << endl;

    double p = 2.5, q = 4.5;

    swapVals(p, q);
    cout << "After swapping doubles: " << p << " " << q << endl;

    double d[] = {2.5, 8.5, 4.5};
    cout << "Maximum double: " << findMax(d, 3) << endl;

    return 0;
}