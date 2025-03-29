#include <iostream>
#include <vector>
using namespace std;

#define NOT_PRIME -1

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int M = 0, N = 0, sum = 0, min = 0;
    cin >> M >> N;

    vector<int> numbers(N + 1, 0);
    for (int i = 2; i <= N; i++) {
        numbers[i] = i;
    }

    for (int i = 2; i <= N; i++) {
        for (int j = 0; j <= N; j++) {
            if (numbers[j] > i && numbers[j] % i == 0) {
                numbers[j] = NOT_PRIME;
            }
        }
    }

    for (int i = M; i <= N; i++) {
        if (numbers[i] != NOT_PRIME) {
            if (min == 0) {
                min = numbers[i];
            }
            sum += numbers[i];
        }
    }

    if (sum != 0) {
        cout << sum << '\n';
        cout << min << '\n';
    }
    else {
        cout << "-1\n";
    }

    return 0;
}


