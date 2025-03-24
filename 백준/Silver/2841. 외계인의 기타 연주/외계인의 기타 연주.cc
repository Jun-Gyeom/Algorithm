#include <iostream>
#include <stack>
using namespace std;

#define STRING_NUMBER 6

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0, P = 0, answer = 0;
    stack<int> stacks[STRING_NUMBER + 1];

    cin >> N >> P;

    for (int i = 0; i < N; i++) {
        int a = 0, b = 0;
        cin >> a >> b;

        while (!stacks[a].empty() && b < stacks[a].top()) {
            stacks[a].pop();
            answer++;
        }
        if (stacks[a].empty() || b != stacks[a].top()) {
            stacks[a].push(b);
            answer++;
        }
    }

    cout << answer << '\n';

    return 0;
}