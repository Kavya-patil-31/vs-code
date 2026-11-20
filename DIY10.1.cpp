#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("nums.txt");

    int n, count = 0, sum = 0;
    int min, max;

    if (!(file >> n)) {
        cout << "File is empty";
        return 0;
    }

    min = max = n;

    do {
        count++;
        sum += n;

        if (n < min) min = n;
        if (n > max) max = n;

    } while (file >> n);

    file.close();

    cout << "Count: " << count << endl;
    cout << "Sum: " << sum << endl;
    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;

    return 0;
}