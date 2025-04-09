#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0;
    cin >> N;

    queue<int> queue;
    for (int i = 0; i < N; i++) {
        string message;
        cin >> message;

        if (message == "push") {
            int x = 0;
            cin >> x;
            queue.push(x);
        }
        else if (message == "pop") {
            if (!queue.empty()) {
                cout << queue.front() << '\n';
                queue.pop();
            } else {
                cout << "-1\n";
            }
        }
        else if (message == "size") {
            cout << queue.size() << '\n';
        }
        else if (message == "empty") {
            cout << static_cast<int>(queue.empty()) << '\n';
        }
        else if (message == "front") {
            if (!queue.empty()) {
                cout << queue.front() << '\n';
            } else {
                cout << "-1\n";
            }
        }
        else if (message == "back") {
            if (!queue.empty()) {
                cout << queue.back() << '\n';
            } else {
                cout << "-1\n";
            }
        }
    }

    return 0;
}
