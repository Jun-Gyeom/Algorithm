#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int factorial = 1;
    for (int i = 1; i < n + 1; i++) {
        factorial *= i;
    }
    cout << factorial;
    return 0;
}

