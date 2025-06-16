#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<string, int> nameCount;

    for (int i = 0; i < n; ++i) {
        string name;
        cin >> name;

        if (nameCount[name] == 0) {
            cout << "OK" << endl;
        } else {
            cout << name << nameCount[name] << endl;
        }

        nameCount[name]++;
    }

    return 0;
}
