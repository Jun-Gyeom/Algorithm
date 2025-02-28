#include <iostream>
#include <queue>
#include <vector>

int main(int argc, char* argv[]) {
    int N = 0, K = 0;
    std::queue<int> numbers;
    std::vector<int> result;

    std::cin >> N >> K;
    for (int i = 1; i <= N; i++) {
        numbers.push(i);
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            if (j == K - 1) {
                result.push_back(numbers.front());
                numbers.pop();
            }
            else {
                numbers.push(numbers.front());
                numbers.pop();
            }
        }
    }

    std::cout << '<' << result[0];
    for (int i = 1; i < N; i++) {
        std::cout << ", " << result[i];
    }
    std::cout << '>';

    return 0;
}
