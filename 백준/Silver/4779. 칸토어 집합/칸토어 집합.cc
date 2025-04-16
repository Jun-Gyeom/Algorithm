#include <iostream>
#include <cmath>
using namespace std;

void cantor(int n);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0;
    while (!cin.eof() && cin >> N) {
        cantor(N);
        cout << '\n';
    }

    return 0;
}

void cantor(int n) {
    if (n == 0) {
        cout << '-';
        return;
    }

    int space = pow(3, n - 1);

    cantor(n - 1);
    for (int i = 0; i < space; i++) {
        cout << ' ';
    }
    cantor(n - 1);
}