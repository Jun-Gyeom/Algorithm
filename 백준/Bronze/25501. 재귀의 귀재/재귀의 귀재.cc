#include <iostream>
using namespace std;

bool isPalindrome(const string& s, int* number);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T = 0;
    cin >> T;

    for (int t = 0; t < T; t++) {
        string S;
        cin >> S;

        int number = 0;
        bool result = isPalindrome(S, &number);
        cout << static_cast<int>(result) << ' ' << number << '\n';
    }

    return 0;
}

bool isPalindrome(const string& s, int* number) {
    (*number)++;
    if (s.length() <= 1) return true;
    if (s[0] != s[s.length() - 1]) return false;
    return isPalindrome(s.substr(1, s.length() - 2), number);
}