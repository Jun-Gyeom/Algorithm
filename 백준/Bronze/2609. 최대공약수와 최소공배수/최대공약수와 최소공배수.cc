#include <iostream>

int main(int argc, char* argv[]) {
    int a = 0, b = 0;
    int greatestCommonDivisor = 0, leastCommonMultiple = 0; // 최대공약수, 최소공배수
    std::cin >> a >> b;

    // 최대공약수 구하기
    for (int i = 1; i <= (a < b ? a : b); i++) {
        if (a % i == 0 && b % i == 0) {
            if (i > greatestCommonDivisor) {
                greatestCommonDivisor = i;
            }
        }
    }

    // 최소공배수 구하기
    leastCommonMultiple = a * b / greatestCommonDivisor;

    std::cout << greatestCommonDivisor << '\n';
    std::cout << leastCommonMultiple << '\n';

    return 0;
}
