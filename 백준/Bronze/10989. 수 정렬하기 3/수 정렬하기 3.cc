#include <iostream>
#include <vector>
using namespace std;

#define MAX     10000

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0;
    cin >> N;

    vector<int> count(MAX + 1, 0);
    for (int i = 0; i < N; i++) {
        short number = 0;
        cin >> number;
        count[number]++;
    }

    for (int i = 1; i <= MAX; i++) {
        for (int j = 0; j < count[i]; j++) {
            cout << i << '\n';
        }
    }

    return 0;
}