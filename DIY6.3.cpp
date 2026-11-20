#include <iostream>
using namespace std;

class SafeArray {
    int *arr;
    int size;

public:
    SafeArray(int s) {
        size = s;
        arr = new int[size];
    }

    int& operator[](int index) {
        if (index < 0 || index >= size) {
            throw out_of_range("Index out of range!");
        }
        return arr[index];
    }

    ~SafeArray() {
        delete[] arr;
    }
};

int main() {
    int n;

    cout << "Enter array size: ";
    cin >> n;

    SafeArray a(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    try {
        int index;
        cout << "\nEnter index to access: ";
        cin >> index;

        cout << "Element: " << a[index] << endl;
    }
    catch (out_of_range &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}