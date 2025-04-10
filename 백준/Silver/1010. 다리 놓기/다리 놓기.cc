#include <iostream>
using namespace std;

#define ull unsigned long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T = 0;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int n = 0, m = 0;
        cin >> n >> m;

        ull answer = 1;
        int k = 1;
        for (int j = m; j > m - n; j--) {
            answer *= j;
            answer /= k;
            k++;
        }

        cout << answer << "\n";
    }

    return 0;
}
