#include <iostream>
#include <string.h>

#define MAX 100

int main() {
    char str[MAX + 1];
    std::cin >> str;

    int gap = 'a' - 'A';
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= gap;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += gap;
        }
    }

    std::cout << str;
    return 0;
}

