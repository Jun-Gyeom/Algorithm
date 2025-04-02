#include <iostream>
using namespace std;

#define ull unsigned long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ull n = 0;
    cin >> n;
    cout << n * (n - 1) / 2 << '\n';
    cout << "2\n";

    return 0;
}