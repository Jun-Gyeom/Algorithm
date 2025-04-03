#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0, M = 0;
    cin >> N >> M;

    vector<vector<bool>> bord(N, vector<bool>(M, false));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            char character;
            cin >> character;
            bord[i][j] = character == 'B';
        }
    }

    int answer = N * M;

    for (int i = 0; i <= N - 8; i++) {
        for (int j = 0; j <= M - 8; j++) {
            for (int k = 0; k <= 1; k++) {
                int correctionTile = 0;
                bool previousTile = k;

                for (int y = i; y < i + 8; y++) {
                    for (int x = j; x < j + 8; x++) {
                        if (bord[y][x] == previousTile) {
                            correctionTile++;
                        }
                        previousTile = !previousTile;
                    }
                    previousTile = !previousTile;
                }

                if (correctionTile < answer) {
                    answer = correctionTile;
                }
            }
        }
    }
    cout << answer << '\n';

    return 0;
}