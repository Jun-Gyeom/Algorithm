#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N = 0, M = 0;
    int result = 0;
    std::vector<int> numbers;

    std::cin >> N >> M;
    for (int i = 0; i < N; i++) {
        int number = 0;
        std::cin >> number;
        numbers.push_back(number);
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                if (i == j || i == k || j == k) continue;

                int sum = numbers[i] + numbers[j] + numbers[k];
                if (sum > result && sum <= M)
                    result = sum;
            }
        }
    }

    std::cout << result;

    return 0;
}
