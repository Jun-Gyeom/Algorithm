#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;

    if (a + b + c != 180) {
        cout << "Error\n";
    }
    else if (a == b && a == c && b == c) {
        cout << "Equilateral\n";
    }
    else if (a == b || a == c || b == c) {
        cout << "Isosceles\n";
    }
    else if (a != b && a != c && b != c) {
        cout << "Scalene\n";
    }

    return 0;
}