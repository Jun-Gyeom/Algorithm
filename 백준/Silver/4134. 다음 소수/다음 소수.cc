#include <iostream>
#include <cmath>
using namespace std;

#define uint unsigned int

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T = 0;
    cin >> T;
    for (int i = 0; i < T; i++) {
        uint N = 0;
        cin >> N;

        bool isPrime = false;
        while (!isPrime) {
            isPrime = true;
            if (N < 2) isPrime = false;
            for (int j = 2; j <= sqrt(N); j++) {
                if (N % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (!isPrime) N++;
        }
        cout << N << '\n';
    }

    return 0;
}
