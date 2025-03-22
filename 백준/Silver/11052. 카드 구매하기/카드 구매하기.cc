#include <iostream>
#include <vector>

std::vector<int> DP;    // DP[N] = N개의 카드를 갖기 위해 지불해야 하는 금액의 최댓값

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N = 0;
    std::cin >> N;

    DP.resize(N + 1, 0);
    std::vector<int> prices(N + 1, 0);

    for (int i = 1; i <= N; i++) {
        std::cin >> prices[i];
    }

    for (int i = 1; i <= N; i++) {
        int max = 0;
        for (int j = 1; j <= i; j++) {
            if (prices[j] + DP[i - j] > max) {
                max = prices[j] + DP[i - j];
            }
        }
        DP[i] = max;
    }
    std::cout << DP[N];

    return 0;
}

