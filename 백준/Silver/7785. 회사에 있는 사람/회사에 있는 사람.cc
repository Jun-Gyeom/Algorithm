#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0;
    cin >> N;

    set<string, greater<string>> employee;
    for (int i = 0; i < N; i++) {
        string name, state;
        cin >> name >> state;
        if (employee.find(name) == employee.end()) {
            employee.insert(name);
        }
        else {
            employee.erase(name);
        }
    }

    for (set<string>::iterator it = employee.begin(); it != employee.end(); ++it) {
        cout << *it << '\n';
    }

    return 0;
}
