#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0, k = 0;
    cin >> N >> k;

    vector<int> numbers(N, 0);
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }

    sort(numbers.rbegin(), numbers.rend());
    cout << numbers[k - 1] << '\n';

    return 0;
}