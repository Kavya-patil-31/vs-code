#include <iostream>
#include <numeric>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    int product = accumulate(arr, arr + n, 1,
        [](int a, int b) {
            return a * b;
        });

    int evenSum = accumulate(arr, arr + n, 0,
        [](int a, int b) {
            return a + (b % 2 == 0 ? b : 0);
        });

    cout << "Product: " << product << endl;
    cout << "Sum of even numbers: " << evenSum << endl;

    return 0;
}