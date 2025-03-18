#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N = 0, K = 0, answer = 0;
    std::cin >> N >> K;
    std::vector<int> values(N, 0);

    for (int i = 0; i < N; i++) {
        std::cin >> values[i];
    }

    for (int i = N - 1; i >= 0; i--) {
        if (K / values[i] > 0) {
            answer += K / values[i];
            K -= values[i] * (K / values[i]);
        }
    }

    std::cout << answer;

    return 0;
}

