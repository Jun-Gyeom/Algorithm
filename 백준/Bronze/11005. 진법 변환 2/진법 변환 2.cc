#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0, B = 0;
    string answer;

    cin >> N >> B;

    while (N != 0) {
        string number;
        if (N % B >= 10 && N % B <= 35) {
            number = static_cast<char>(N % B + 'A' - 10);
        }
        else {
            number = to_string(N % B);
        }
        answer.insert(0, number);
        N /= B;
    }

    cout << answer << '\n';

    return 0;
}


