#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 1 -> (2 + 1) ** 2
    // 2 -> (3 + 2) ** 2
    // 3 -> (5 + 4) ** 2
    // 4 -> (9 + 8) ** 2
    // 5 -> (17 + 16) ** 2

    int N = 0;
    cin >> N;

    int number = 2;
    for (int i = 1; i < N; i++) {
        number = number + number - 1;
    }

    cout << (number + number - 1) * (number + number - 1) << '\n';

    return 0;
}


