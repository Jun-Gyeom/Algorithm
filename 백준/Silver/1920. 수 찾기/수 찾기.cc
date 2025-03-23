#include <iostream>
#include <set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0, M = 0;
    set<int> numbers;

    cin >> N;
    for (int i = 0; i < N; i++) {
        int number = 0;
        cin >> number;
        numbers.insert(number);
    }

    cin >> M;
    for (int i = 0; i < M; i++) {
        int number = 0;
        bool answer = false;
        cin >> number;
        if (numbers.find(number) != numbers.end()) {
            answer = true;
        }
        cout << answer << '\n';
    }

    return 0;
}