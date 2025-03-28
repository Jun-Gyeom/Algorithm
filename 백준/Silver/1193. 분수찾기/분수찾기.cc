#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int X = 0;
    cin >> X;

    int line = 1;
    while (X > line) {
        X -= line;
        line++;
    }

    if (line % 2 == 0) {
        cout << X << "/" << line - X + 1 << '\n';
    }
    else {
        cout << line - X + 1 << "/" << X << '\n';
    }

    return 0;
}


