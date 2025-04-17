#include <iostream>
#include <vector>
using namespace std;

vector<int> sequence;

void BackTracking(int n, int m, int k);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0, M = 0;
    cin >> N >> M;

    sequence.resize(M, 0);
    BackTracking(N, M, 0);

    return 0;
}

void BackTracking(int n, int m, int k) {
    if (k == m) {
        for (int i = 0; i < m; i++) {
            cout << sequence[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 0; i < n; i++) {
        sequence[k] = i + 1;
        BackTracking(n, m, k + 1);
    }
}

