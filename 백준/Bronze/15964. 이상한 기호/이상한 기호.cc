#include <iostream>
#include <string.h>

int calculate(int a, int b) {
    return (a + b) * (a - b);
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << calculate(a, b);
    return 0;
}

