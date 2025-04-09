#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0;
    cin >> N;

    vector<bool> dataStructures(N, false);
    for (int i = 0; i < N; i++) {
        bool isStack = false;
        cin >> isStack;
        dataStructures[i] = isStack;
    }

    stack<int> stack;
    for (int i = 0; i < N; i++) {
        int number = 0;
        cin >> number;
        if (!dataStructures[i]) {
            stack.push(number);
        }
    }

    int M = 0;
    cin >> M;

    queue<int> queue;
    for (int i = 0; i < M; i++) {
        int number = 0;
        cin >> number;
        queue.push(number);

        if (!stack.empty()) {
            cout << stack.top() << ' ';
            stack.pop();
        }
        else {
            cout << queue.front() << ' ';
            queue.pop();
        }
    }

    return 0;
}
