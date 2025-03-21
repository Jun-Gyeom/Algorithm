#include <iostream>
#include <vector>

std::vector<int> DP;

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N = 0;
    std::cin >> N;

    DP.resize(N + 1, 0);

    for (int i = 1; i <= N; i++) {
        DP[i] = i;
        for (int j = 2; j * j <= i; j++) {
            DP[i] = DP[i - j * j] + 1 < DP[i] ? DP[i - j * j] + 1 : DP[i];
        }
    }
    std::cout << DP[N];

    return 0;
}

