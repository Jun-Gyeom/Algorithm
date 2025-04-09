#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0;
    cin >> N;

    int current = 1;
    stack<int> stack;
    for (int i = 0; i < N; i++) {
        int number = 0;
        cin >> number;
        if (number == current) {
            current++;
        }
        else {
            while (!stack.empty() && stack.top() == current) {
                current++;
                stack.pop();
            }
            stack.push(number);
        }
    }

    while (!stack.empty()) {
        if (stack.top() == current) {
            current++;
            stack.pop();
        }
        else {
            break;
        }
    }

    if (stack.empty()) {
        cout << "Nice\n";
    }
    else {
        cout << "Sad\n";
    }

    return 0;
}
