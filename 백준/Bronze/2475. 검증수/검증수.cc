#include <iostream>
#include <string.h>

int square(int n) {
    return n * n;
}

int main() {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        int n;
        std::cin >> n;
        sum += square(n);
    }
    std::cout << sum % 10;
    return 0;
}

