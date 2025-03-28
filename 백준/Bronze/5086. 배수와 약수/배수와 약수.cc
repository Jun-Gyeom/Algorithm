#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int i = 0, j = 0;

    do {
        cin >> i >> j;
        if (i == 0 && j == 0) {
            continue;
        }

        if (j % i == 0) {
            cout << "factor\n";
        }
        else if (i % j == 0) {
            cout << "multiple\n";
        }
        else {
            cout << "neither\n";
        }
    } while (i != 0 && j != 0);

    return 0;
}


