#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int K = 0;
    cin >> K;

    stack<int> stack;
    for (int i = 0; i < K; i++) {
        int number = 0;
        cin >> number;
        if (number == 0) {
            stack.pop();
        }
        else {
            stack.push(number);
        }
    }

    int answer = 0;
    while (!stack.empty()) {
        answer += stack.top();
        stack.pop();
    }
    cout << answer << '\n';

    return 0;
}
