#include <iostream>
using namespace std;

#define ull unsigned long long

ull factorial(ull n);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0;
    cin >> N;
    cout << factorial(N) << '\n';

    return 0;
}

ull factorial(ull n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}