#include <iostream>
using namespace std;

#define ROW     5
#define COLUMN  15

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    char array[ROW][COLUMN] = {'\0'};

    for (int row = 0; row < ROW; row++) {
        string line;
        cin >> line;
        for (int i = 0; i < line.length(); i++) {
            array[row][i] = line[i];
        }
    }

    for (int column = 0; column < COLUMN; column++) {
        for (int row = 0; row < ROW; row++) {
            if (!array[row][column] == '\0') {
                cout << array[row][column];
            }
        }
    }

    return 0;
}


