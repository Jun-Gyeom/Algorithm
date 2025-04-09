#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string text;
    while (true) {
        getline(cin, text, '.');
        cin.ignore();
        if (text == "") break;

        bool isBalance = true;
        stack<char> stack;
        for (int i = 0; i < text.length(); i++) {
            if (text[i] == '(') {
                stack.push(text[i]);
            }
            else if (text[i] == '[') {
                stack.push(text[i]);
            }
            else if (text[i] == ')') {
                if (stack.empty() || stack.top() != '(') {
                    isBalance = false;
                    break;
                }
                stack.pop();
            }
            else if (text[i] == ']') {
                if (stack.empty() || stack.top() != '[') {
                    isBalance = false;
                    break;
                }
                stack.pop();
            }
        }

        if (stack.empty() && isBalance) {
            cout << "yes\n";
        }
        else {
            cout << "no\n";
        }
    }

    return 0;
}
