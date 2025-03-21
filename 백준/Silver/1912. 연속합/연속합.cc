#include <iostream>
#include <vector>

std::vector<int> DP;
std::vector<int> numbers;

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n = 0;
    std::cin >> n;

    DP.resize(n + 1, 0);
    numbers.resize(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        std::cin >> numbers[i];
    }

    DP[1] = numbers[1];
    for (int i = 2; i <= n; i++) {
        DP[i] = DP[i-1] + numbers[i] > numbers[i] ? DP[i-1] + numbers[i] : numbers[i];
    }

    int answer = DP[1];
    for (int i = 1; i <= n; i++) {
        if (DP[i] > answer) {
            answer = DP[i];
        }
    }
    std::cout << answer;

    return 0;
}

