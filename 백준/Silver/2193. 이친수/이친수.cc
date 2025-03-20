#include <iostream>
#include <vector>

#define ull unsigned long long

std::vector<std::vector<ull>> DP;

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N = 0;
    std::cin >> N;

    DP.resize(N + 1, std::vector<ull>(2, 0));
    DP[1][0] = 0;
    DP[1][1] = 1;

    for (int i = 2; i <= N; i++) {
        DP[i][0] = DP[i - 1][0] + DP[i - 1][1];
        DP[i][1] = DP[i - 1][0];
    }

    std::cout << DP[N][0] + DP[N][1];

    return 0;
}

