#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T = 0, C = 0;

    cin >> T;
    for (int i = 0; i < T; i ++) {
        int answer[4] = {0};
        cin >> C;
        while (C - 25 >= 0) {
            C -= 25;
            answer[0]++;
        }
        while (C - 10 >= 0) {
            C -= 10;
            answer[1]++;
        }
        while (C - 5 >= 0) {
            C -= 5;
            answer[2]++;
        }
        while (C - 1 >= 0) {
            C -= 1;
            answer[3]++;
        }

        for (int j = 0; j < 4; j++) {
            cout << answer[j] << " ";
        }
        cout << '\n';
    }

    return 0;
}


