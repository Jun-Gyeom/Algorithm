#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string S;
    cin >> S;

    unordered_set<string> set;
    for (int i = 0; i < S.length(); i++) {
        for (int j = 1; j <= S.length() - i; j++) {
            string substr = S.substr(i, j);
            if (set.find(substr) == set.end()) {
                set.insert(substr);
            }
        }
    }
    cout << set.size() << '\n';

    return 0;
}
