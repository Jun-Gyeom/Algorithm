#include <iostream>
#include <vector>

#define ull unsigned long long
#define MOD 1000000000

std::vector<std::vector<ull>> DP;

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N = 0;
    ull answer = 0;
    std::cin >> N;

    DP.resize(N + 1, std::vector<ull>(10, 0));
    for (int i = 1; i <= 9; i++) {
        DP[1][i] = 1;
    }

    for (int i = 2; i <= N; i++) {
        DP[i][0] = DP[i - 1][1] % MOD;
        for (int j = 1; j <= 8; j++) {
            DP[i][j] = (DP[i - 1][j - 1] + DP[i - 1][j + 1]) % MOD;
        }
        DP[i][9] = DP[i - 1][8] % MOD;
    }

    for (int i = 0; i <= 9; i++) {
        answer += DP[N][i];
    }
    std::cout << answer % MOD;

    return 0;
}

