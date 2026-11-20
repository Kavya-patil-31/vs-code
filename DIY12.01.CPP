#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<pair<string, int>> v = {
        {"Rahul", 80},
        {"Kavya", 95},
        {"Anu", 70},
        {"Riya", 85}
    };

    sort(v.begin(), v.end(),
         [](auto a, auto b) {
             return a.second < b.second;
         });

    cout << "Sorted Records:" << endl;

    for (auto x : v) {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}