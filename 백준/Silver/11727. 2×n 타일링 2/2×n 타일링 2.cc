#include <iostream>
#include <vector>

#define MOD 10007
std::vector<int> DP;

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n = 0;
    std::cin >> n;

    DP.resize(n + 1, 0);
    DP[1] = 1;
    DP[2] = 3;

    for (int i = 3; i <= n; i++) {
        DP[i] = (DP[i - 1] % MOD + DP[i - 2] % MOD + DP[i - 2] % MOD) % MOD;
    }
    std::cout << DP[n];

    return 0;
}

