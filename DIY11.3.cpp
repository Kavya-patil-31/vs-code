#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> freq;
    string word;

    cout << "Enter words: ";

    for (int i = 0; i < 5; i++) {
        cin >> word;
        freq[word]++;
    }

    string most;
    int maxCount = 0;

    cout << "\nWord Frequencies:" << endl;

    for (auto x : freq) {
        cout << x.first << ": " << x.second << endl;

        if (x.second > maxCount) {
            maxCount = x.second;
            most = x.first;
        }
    }

    cout << "Most frequent word: " << most << endl;

    return 0;
}