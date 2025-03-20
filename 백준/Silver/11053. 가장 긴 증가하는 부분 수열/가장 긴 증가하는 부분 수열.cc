#include <iostream>
#include <vector>

std::vector<int> DP;
std::vector<int> numbers;

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N = 0, answer = 0;
    std::cin >> N;

    DP.resize(N + 1, 0);
    numbers.resize(N + 1, 0);

    for (int i = 1; i <= N; i++) {
        std::cin >> numbers[i];
    }

    for (int i = 1; i <= N; i++) {
        int max = 0;
        for (int j = 1; j < i; j++) {
            if (numbers[j] < numbers[i]) {
                if (DP[j] > max) {
                    max = DP[j];
                }
            }
        }
        DP[i] = max + 1;
        if (DP[i] > answer) {
            answer = DP[i];
        }
    }
    std::cout << answer;

    return 0;
}

