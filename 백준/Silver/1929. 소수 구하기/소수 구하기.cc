#include <iostream>
#define MAX         1000000
#define NOT_PRIME   1

int main(int argc, char* argv[]) {
    int M = 0, N = 0;
    int numbers[MAX + 1] = { NOT_PRIME };

    std::cin >> M >> N;
    for (int i = M; i <= N; i++) {
        numbers[i] = i;
    }

    // 에라토스테네스의 체 알고리즘
    for (int i = 2; i <= N; i++) {
        if (numbers[i] == NOT_PRIME) continue;

        for (int j = 2 * i; j <= N; j += i) {
            numbers[j] = NOT_PRIME;
        }
    }

    for (int i = M; i <= N; i++) {
        if (numbers[i] != NOT_PRIME)
            std::cout << numbers[i] << '\n';
    }

    return 0;
}
