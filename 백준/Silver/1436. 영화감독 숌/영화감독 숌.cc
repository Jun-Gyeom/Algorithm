#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0;
    cin >> N;

    int number = 665;
    while (N > 0) {
        number++;
        if (to_string(number).find("666") != string::npos) {
            N--;
        }
    }

    cout << number << '\n';

    return 0;
}