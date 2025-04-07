#include <iostream>
#include <vector>
using namespace std;

#define MAX 1000000000

int calculate_gcd(int a, int b);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0;
    cin >> N;


    vector<int> numbers(N, 0);
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];

    }

    int gcd = 0;
    for (int i = 1; i < N; i++) {
        gcd = calculate_gcd(gcd, numbers[i] - numbers[i - 1]);
    }

    int answer = 0;
    for (int i = 1; i < N; i++) {
        answer += (numbers[i] - numbers[i - 1]) / gcd - 1;
    }
    cout << answer << '\n';

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