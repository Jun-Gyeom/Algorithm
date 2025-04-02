#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    double a1 = 0, a0 = 0, c = 0, n = 0;
    cin >> a1 >> a0 >> c >> n;
    cout << (a0 / (c - a1) <= n && a1 <= c) << '\n';

    return 0;
}