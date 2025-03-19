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
    DP[1] = 0;

    for (int i = 2; i <= N; i++) {
        int min = i;
        if (i % 3 == 0) {
            if (DP[i / 3] + 1 < min) {
                min = DP[i / 3] + 1;
            }
        }

        if (i % 2 == 0) {
            if (DP[i / 2] + 1 < min) {
                min = DP[i / 2] + 1;
            }
        }

        if (DP[i - 1] + 1 < min) {
            min = DP[i - 1] + 1;
        }

        DP[i] = min;
    }

    std::cout << DP[N];

    return 0;
}

