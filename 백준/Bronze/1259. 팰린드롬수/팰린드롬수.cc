#include <iostream>
#include <string>

// 팰린드롬인지 판별
bool IsPalindrome(std::string message) {
    for (int i = 0; i < message.length() / 2; i++) {
        if (message[i] != message[message.length() - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main(int argc, char* argv[]) {
    std::string number;

    while (true) {
        std::cin >> number;
        if (number == "0") break;
        if (IsPalindrome(number)) std::cout << "yes\n";
        else std::cout << "no\n";
    }
    
    return 0;
}
