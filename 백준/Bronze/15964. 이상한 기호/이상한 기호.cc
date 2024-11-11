#include <iostream>
#include <string.h>

long long calculate(long long a, long long b) {
    return (a + b) * (a - b);
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << calculate(a, b);
    return 0;
}

