#include <iostream>
using namespace std;

int calculate_gcd(int a, int b);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int A1 = 0, B1 = 0, A2 = 0, B2 = 0;
    cin >> A1 >> B1 >> A2 >> B2;;

    int gcd = 0, lcm = 0;
    gcd = calculate_gcd(B1, B2);
    lcm = B1 * B2 / gcd;

    A1 *= lcm / B1;
    A2 *= lcm / B2;

    cout << (A1 + A2) / calculate_gcd(A1 + A2, lcm) << ' ' << lcm / calculate_gcd(A1 + A2, lcm) << '\n';;

    return 0;
}

int calculate_gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}