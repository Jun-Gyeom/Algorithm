#include <iostream>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string N;
    int B = 0;
    int answer = 0;

    cin >> N >> B;
    ll powNumber = 1;
    for (int i = N.length() - 1; i >= 0; i--) {
        int number = 0;
        if (N[i] >= 'A' && N[i] <= 'Z') {
            number = N[i] - 'A' + 10;
        }
        else {
            number = N[i] - '0';
        }
        answer += number * powNumber;
        powNumber *= B;
    }
    cout << answer << '\n';

    return 0;
}


