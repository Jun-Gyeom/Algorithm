#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;

    int M = a, remain = b + c;
    if (b > M) {
        M = b;
        remain = a+ c;
    }
    if (c > M) {
        M = c;
        remain = a + b;
    }

    if (M >= remain) {
        M = remain - 1;
    }
    cout << M + remain << '\n';

    return 0;
}