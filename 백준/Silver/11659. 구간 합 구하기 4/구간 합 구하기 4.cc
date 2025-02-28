#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N = 0, M = 0;
    std::cin >> N >> M;

    std::vector<int> numbers;
    std::vector<int> sum(1, 0);

    // 합 배열 구하기
    for (int i = 0; i < N; i++ ) {
        int number;
        std::cin >> number;
        numbers.push_back(number);
        sum.push_back(sum[i] + number);
    }

    for (int k = 0; k < M; k++) {
        int i = 0, j = 0;
        std::cin >> i >> j;
        std::cout << sum[j] - sum[i - 1] << '\n';
    }

    return 0;
}
