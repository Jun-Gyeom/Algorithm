#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

#define NOT_PRIME -1

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n = 0;

    cin >> n;
    vector<int> primeNumbers(n + 1, NOT_PRIME);
    for (int i = 2; i <= n; i++) {
        primeNumbers[i] = i;
    }

    for (int i = 2; i <= sqrt(n); i++) {
        if (primeNumbers[i] == NOT_PRIME) {
            continue;
        }
        for (int j = 2; i * j <= n; j++) {
            primeNumbers[i * j] = NOT_PRIME;
        }
    }

    while (n != 1) {
        for (int i = 0; i <= n; i++) {
            if (primeNumbers[i] != NOT_PRIME && n % primeNumbers[i] == 0) {
                n /= primeNumbers[i];
                cout << primeNumbers[i] << '\n';
                break;
            }
        }
    }

    return 0;
}


