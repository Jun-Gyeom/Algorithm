#include <iostream>

int main(int argc, char* argv[]) {
    int n, result = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int number = 0;
        std::cin >> number;

        // 소수 판별 알고리즘
        bool isPrime = true;
        if (number == 0 || number == 1) continue;
        for (int j = 2; j < number; j++) {
            if (number % j == 0) isPrime = false;
        }

        if (isPrime) result++;
    }
    std::cout << result;

    return 0;
}
