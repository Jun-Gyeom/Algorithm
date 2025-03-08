#include <iostream>

unsigned long long pow(unsigned long long a, unsigned long long b, unsigned long long c) {
    // 분할 정복을 통한 거듭제곱 알고리즘 + 모듈러 연산 법칙 (a와 b를 p로 나눈 나머지가 동일할 때, a^k와 b^k를 p로 나눈 나머지는 같다.)
    if (b == 0)
        return 1;

    if (b == 1)
        return a % c;

    else if (b > 1) {
        if (b % 2 == 0) {
            unsigned long long x = pow(a, b / 2, c) % c;
            return x * x % c;
        }
        else {
            unsigned long long x = pow(a, (b - 1) / 2, c) % c;
            return x * x % c * a % c;
        }
    }
    else
        return 0;
}

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    unsigned long long A = 0, B = 0, C = 0;
    std::cin >> A >> B >> C;
    std::cout << pow(A, B, C);

    return 0;
}