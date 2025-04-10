#include <iostream>
using namespace std;

int factorial(const int& number);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0, K = 0;
    cin >> N >> K;

    if (K == 0 || N == K) {
        cout << "1\n";
    }
    else if (N > K) {
        cout << factorial(N) / factorial(N - K) / factorial(K) << '\n';
    }

    return 0;
}

int factorial(const int& number) {
    int result = number;
    for (int i = 1; i < number; i++) {
        result *= i;
    }
    return result;
}