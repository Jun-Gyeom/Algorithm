#include <iostream>
using namespace std;

#define ROW     9
#define COLUMN  9

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int max = 0, maxRow = 1, maxColumn = 1;
    for (int row = 1; row <= ROW; row++) {
        for (int column = 1; column <= COLUMN; column++) {
            int number = 0;
            cin >> number;
            if (number > max) {
                max = number;
                maxRow = row;
                maxColumn = column;
            }
        }
    }
    cout << max << '\n';
    cout << maxRow << " " << maxColumn << '\n';

    return 0;
}


