#include <iostream>
#include <deque>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0;
    cin >> N;
    cin.ignore();

    deque<int> deque;
    for (int i = 0; i < N; i++) {
        string message;
        getline(cin, message);

        switch (message[0]) {
            case '1':
                deque.push_front(stoi(message.substr(2)));
                break;
            case '2':
                deque.push_back(stoi(message.substr(2)));
                break;
            case '3':
                if (!deque.empty()) {
                    cout << deque.front() << '\n';
                    deque.pop_front();
                }
                else {
                    cout << "-1\n";
                }
                break;
            case '4':
                if (!deque.empty()) {
                    cout << deque.back() << '\n';
                    deque.pop_back();
                }
                else {
                    cout << "-1\n";
                }
                break;
            case '5':
                cout << deque.size() << '\n';
                break;
            case '6':
                cout << static_cast<int>(deque.empty()) << '\n';
                break;
            case '7':
                if (!deque.empty()) {
                    cout << deque.front() << '\n';
                }
                else {
                    cout << "-1\n";
                }
                break;
            case '8':
                if (!deque.empty()) {
                    cout << deque.back() << '\n';
                }
                else {
                    cout << "-1\n";
                }
                break;
        }
    }

    return 0;
}
