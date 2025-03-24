#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

bool compare(string a, string b);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;

    cin >> t;
    for (int i = 0; i < t; i ++) {
        int n = 0;
        bool answer = true;
        map<string, bool> phoneNumberBook;
        vector<string> phoneNumbers;

        cin >> n;
        phoneNumbers.resize(n);
        for (int j = 0; j < n; j++) {
            cin >> phoneNumbers[j];
        }
        sort(phoneNumbers.begin(), phoneNumbers.end(), compare);

        for (int j = 0; j < n; j++) {
            for (int k = 1; k < phoneNumbers[j].length(); k++) {
                if (phoneNumberBook[phoneNumbers[j].substr(0, k)]) {
                    answer = false;
                    break;
                }
            }
            if (!answer) {
                break;
            }
            phoneNumberBook[phoneNumbers[j]] = true;
        }

        if (answer) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }

    return 0;
}

bool compare(string a, string b) {
    return a.length() < b.length();
}