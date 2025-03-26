#include <iostream>
using namespace std;

#define ROW     100
#define COLUMN  100

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n = 0, answer = 0;
    bool array[ROW][COLUMN] = {false};

    cin >> n;
    for (int i = 0; i < n; i++) {
        int first = 0, second = 0;
        cin >> first >> second;
        for (int y = second; y < second + 10; y++) {
            for (int x = first; x < first + 10; x++) {
                array[y][x] = true;
            }
        }
    }

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COLUMN; j++) {
            if (array[i][j]) {
                answer++;
            }
        }
    }
    cout << answer << '\n';

    return 0;
}


