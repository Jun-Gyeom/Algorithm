#include <iostream>
#include <stack>

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int testCase = 0;
    std::cin >> testCase;

    for (int t = 0; t < testCase; t++) {
        std::stack<char> parenthesisStack;
        bool result = true;
        std::string parenthesisString;

        std::cin >> parenthesisString;
        for (int i = 0; i < parenthesisString.length(); i++) {
            if (parenthesisString[i] == '(') {
                parenthesisStack.push(parenthesisString[i]);
            }
            else if (parenthesisString[i] == ')') {
                if (parenthesisStack.empty()) {
                    result = false;
                    break;
                }
                else {
                    parenthesisStack.pop();
                }
            }
        }

        if (parenthesisStack.empty() && result) {
            std::cout << "YES\n";
        }
        else {
            std::cout << "NO\n";
        }
    }

    return 0;
}
