#include <iostream>
using namespace std;

#define ull unsigned long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ull A = 0, B = 0;
    cin >> A >> B;

    ull a = A, b = B;
    while (b != 0) {
        ull r = a % b;
        a = b;
        b = r;
    }

    cout << A * B / a << '\n';

    return 0;
}
