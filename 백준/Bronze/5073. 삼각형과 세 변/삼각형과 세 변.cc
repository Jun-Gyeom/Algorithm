#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a = 0, b = 0, c = 0;

    while (true) {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) {
            break;
        }

        int M = a, remain = b + c;
        if (b > M) {
            M = b;
            remain = a + c;
        }
        if (c > M) {
            M = c;
            remain = a + b;
        }

        if (M >= remain) {
            cout << "Invalid\n";
        }
        else if (a == b && a == c && b == c) {
            cout << "Equilateral\n";
        }
        else if (a == b || a == c || b == c) {
            cout << "Isosceles\n";
        }
        else if (a != b && a != c && a != b) {
            cout << "Scalene\n";
        }
    }

    return 0;
}