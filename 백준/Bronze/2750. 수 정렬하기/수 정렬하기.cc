#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
    int N = 0;
    std::vector<int> numbers;

    // 입력
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        int number = 0;
        std::cin >> number;
        numbers.push_back(number);
    }

    // 버블 정렬 알고리즘
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // 출력
    for (int i = 0; i < N; i++) {
        std::cout << numbers[i] << '\n';
    }

    return 0;
}
