#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0;
    cin >> N;
    cin.ignore();

    stack<int> stack;
    for (int i = 0; i < N; i++) {
        string message;
        getline(cin, message);

        switch (message[0]) {
            case '1':
                stack.push(stoi(message.substr(2)));
                break;
            case '2':
                if (!stack.empty()) {
                    cout << stack.top() << '\n';
                    stack.pop();
                }
                else {
                    cout << "-1\n";
                }
                break;
            case '3':
                cout << stack.size() << '\n';
                break;
            case '4':
                cout << static_cast<int>(stack.empty()) << '\n';
                break;
            case '5':
                if (!stack.empty()) {
                    cout << stack.top() << '\n';
                }
                else {
                    cout << "-1\n";
                }
                break;
        }
    }

    return 0;
}
