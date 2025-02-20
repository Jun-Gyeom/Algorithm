#include <iostream>

#define RIGHT "right\n"
#define WRONG "wrong\n"

int main() {
    int a, b, c = 0;

    while (true) {
        std::cin >> a >> b >> c;
        if (a == 0 || b == 0 || c == 0) break;

        // 주어진 세 개의 변을 가진 삼각형이 직각 삼각형이 맞는지 출력
        if (a * a + b * b == c * c ||
            b * b + c * c == a * a ||
            a * a + c * c == b * b) std::cout << RIGHT;
        else std::cout << WRONG;
    }
    return 0;
}
