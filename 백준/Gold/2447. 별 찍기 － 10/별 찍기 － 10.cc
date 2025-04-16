#include <iostream>
using namespace std;

void star(int i, int j, int n);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            star(i, j, N);
        }
        cout << '\n';
    }

    return 0;
}

void star(int i, int j, int n) {
    // 1. 별인 베이스 케이스
    if (n == 1) {
        cout << '*';
        return;
    }

    // 2. 공백인 베이스 케이스
    if (i / (n / 3) % 3 == 1 && j / (n / 3) % 3 == 1) {
        cout << ' ';
        return;
    }

    // 3. 베이스 케이스가 아닐 경우 재귀
    star(i, j, n / 3);
}