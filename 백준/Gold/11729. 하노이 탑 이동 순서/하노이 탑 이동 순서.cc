#include <iostream>
#include <cmath>
using namespace std;

void hanoi(int n, int from, int by, int to);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0;
    cin >> N;
    cout << static_cast<int>(pow(2, N) - 1) << '\n';
    hanoi(N, 1, 2, 3);

    return 0;
}

void hanoi(int n, int from, int by, int to) {
    if (n == 1) {
        cout << from << ' ' << to << '\n';
        return;
    }

    hanoi(n - 1, from, to, by);
    cout << from << ' ' << to << '\n';
    hanoi(n - 1, by, from, to);
}