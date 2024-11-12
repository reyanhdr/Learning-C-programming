#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<int, int> frequency;
    int num;

    for (int i = 0; i < n; i++) {
        cin >> num;
        frequency[num]++;
    }

    int count = 0;

    for (auto &entry : frequency) {
        if (entry.second == 1) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
