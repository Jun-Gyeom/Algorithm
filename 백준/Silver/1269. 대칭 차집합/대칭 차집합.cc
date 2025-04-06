#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a = 0, b = 0;
    cin >> a >> b;

    unordered_set<int> set;
    for (int i = 0; i < a + b; i++) {
        int number = 0;
        cin >> number;
        if (set.find(number) != set.end()) {
            set.erase(number);
        }
        else {
            set.insert(number);
        }
    }
    cout << set.size() << '\n';

    return 0;
}
