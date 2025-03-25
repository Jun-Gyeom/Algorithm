#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    const string alphabets[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
    string input;

    cin >> input;
    for (int i = 0; i < 8; i++) {
        while (input.find(alphabets[i]) != string::npos) {
            input.replace(input.find(alphabets[i]), alphabets[i].length(), "#");
        }
    }
    cout << input.length() << '\n';

    return 0;
}


