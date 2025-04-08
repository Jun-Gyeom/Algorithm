#include <iostream>
#include <vector>
using namespace std;

#define NOT_PRIME -1

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n = -1;
    while (n != 0) {
        cin >> n;
        if (n == 0) {
            break;
        }
        vector<int> numbers;
        for (int i = n + 1; i <= n * 2; i++) {
            numbers.push_back(i);
        }

        for (int i = 0; i < n; i++) {
            for (int j = 2; j * j <= n * 2; j++) {
                if (numbers[i] % j == 0) {
                    numbers[i] = NOT_PRIME;
                    break;
                }
            }
        }

        int answer = 0;
        for (int i = 0; i < n; i++) {
            if (numbers[i] != NOT_PRIME) {
                answer++;
            }
        }
        cout << answer << '\n';
    }

    return 0;
}
