#include <iostream>
#include <vector>
using namespace std;

#define MAX         1000000
#define NOT_PRIME   -1

vector<int> primeNumbers(MAX + 1, 0);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i <= MAX; i++) {
        primeNumbers[i] = i;
    }

    for (int i = 2; i <= MAX; i++) {
        if (primeNumbers[i] == NOT_PRIME) continue;

        for (int j = i * 2; j <= MAX; j += i) {
            primeNumbers[j] = NOT_PRIME;
        }
    }

    int T = 0;
    cin >> T;
    for (int t = 0; t < T; t++) {
        int n = 0;
        cin >> n;

        int answer = 0;
        for (int i = 2; i <= n / 2; i++) {
            if (primeNumbers[i] != NOT_PRIME && primeNumbers[n - i] != NOT_PRIME) answer++;
        }
        cout << answer << '\n';
    }

    return 0;
}
