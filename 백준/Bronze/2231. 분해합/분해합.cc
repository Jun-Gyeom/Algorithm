#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    int N = 0;
    bool hasResult = false;
    std::cin >> N;

    // 브루트포스 알고리즘
    for (int i = 1; i < N; i++) {
        // i의 분해합을 계산 (분해합 = i + i의 각 자리수의 숫자)
        int decompositionSum = i;
        std::string number = std::to_string(i);
        for (int j = 0; j < number.length(); j++) {
            decompositionSum += number[j] - '0';
        }

        // i가 N의 생성자인지 확인
        if (decompositionSum == N) {
            hasResult = true;
            std::cout << i;
            break;
        }
    }

    // 생성자가 없는 경우에는 0을 출력
    if (!hasResult)
        std::cout << '0';

    return 0;
}
