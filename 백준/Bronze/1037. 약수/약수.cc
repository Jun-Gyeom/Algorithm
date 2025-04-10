#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0;
    cin >> N;

    int max = 0, min = 1000000;
    for (int i = 0; i < N; i++) {
        int number = 0;
        cin >> number;
        if (number > max) {
            max = number;
        }
        if (number < min) {
            min = number;
        }
    }
    cout << max * min << '\n';

    return 0;
}
