#include <iostream>

int main(int argc, char* argv[]) {
    int A = 0, B = 0, V = 0;    // 낮에 올라갈 수 있는 높이 A, 밤에 미끄러지는 높이 B, 나무 막대의 높이 V
    std::cin >> A >> B >> V;

    if ((V - A) % (A - B) == 0) std::cout << (V - A) / (A - B) + 1 << std::endl;
    else std::cout << (V - A) / (A - B) + 2 << std::endl;

    return 0;
}
