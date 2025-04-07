#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T = 0;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int A = 0, B = 0;
        cin >> A >> B;

        int a = A, b = B;
        while (b != 0) {
            int r = a % b;
            a = b;
            b = r;
        }

        cout << A * B / a << '\n';
    }

    return 0;
}
