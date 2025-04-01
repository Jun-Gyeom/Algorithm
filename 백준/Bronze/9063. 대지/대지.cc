#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int minX = 0, maxX = 0, minY = 0, maxY = 0;
    int n = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int x = 0, y = 0;
        cin >> x >> y;
        if (i == 0 || x < minX) {
            minX = x;
        }
        if (i == 0 || x > maxX) {
            maxX = x;
        }
        if (i == 0 || y < minY) {
            minY = y;
        }
        if (i == 0 || y > maxY) {
            maxY = y;
        }
    }

    int answer = (maxX - minX) * (maxY - minY);
    cout << answer << '\n';

    return 0;
}