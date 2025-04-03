#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0;
    cin >> N;

    int answer = 0;
    if (N % 5 == 0) {
        answer = N / 5;
    }
    else {
        while (N % 5 != 0) {
            N -= 3;
            answer++;
            if (N < 0) {
                answer = -1;
                break;
            }
        }
        answer += N / 5;
    }
    cout << answer << '\n';

    return 0;
}