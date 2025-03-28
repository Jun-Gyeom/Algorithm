#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0, K = 0, answer = 0;
    cin >> N >> K;

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            K--;
            if (K == 0) {
                answer = i;
                break;
            }
        }
    }
    cout << answer << '\n';

    return 0;
}


