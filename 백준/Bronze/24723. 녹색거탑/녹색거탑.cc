#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0;
    cin >> N;

    int answer = 2;
    for (int i = 1; i < N; i++) {
        answer *= 2;
    }

    cout << answer << '\n';

    return 0;
}
