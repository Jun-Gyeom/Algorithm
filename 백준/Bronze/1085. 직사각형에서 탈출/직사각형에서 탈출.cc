#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x = 0, y = 0, w = 0, h = 0;
    cin >> x >> y >> w >> h;

    int min = x;
    if (y < min) {
        min = y;
    }
    if (w - x < min) {
        min = w - x;
    }
    if (h - y < min) {
        min = h - y;
    }
    cout << min << '\n';

    return 0;
}