#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0;
    cin >> N;

    deque<int> deque;
    for (int i = 1; i <= N; i++) {
        deque.push_back(i);
    }

    vector<int> paper(N + 1, 0);
    for (int i = 1; i <= N; i++) {
        cin >> paper[i];
    }

    for (int i = 0; i < N; i++) {
        int number = paper[deque.front()];
        cout << deque.front() << ' ';
        if (number > 0) number--;
        deque.pop_front();

        while (number != 0) {
            if (number > 0) {
                deque.push_back(deque.front());
                deque.pop_front();
                number--;
            }
            else {
                deque.push_front(deque.back());
                deque.pop_back();
                number++;
            }
        }
    }

    return 0;
}
