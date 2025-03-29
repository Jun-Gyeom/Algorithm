#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n = 0;
    while (n != -1) {
        cin >> n;
        if (n == -1) {
            break;
        }

        int sum = 0;
        vector<int> numbers;
        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                numbers.push_back(i);
                sum += i;
            }
        }

        if (sum == n) {
            cout << n << " = " << numbers[0];
            for (int i = 1; i < numbers.size(); i++) {
                cout << " + " << numbers[i];
            }
            cout << '\n';
        }
        else {
            cout << n << " is NOT perfect.\n";
        }
    }

    return 0;
}


