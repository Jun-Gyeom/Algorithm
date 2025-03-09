#include <iostream>

#define MAX 1024

int sumArray[MAX + 1][MAX + 1]; // 2차원 누적 합 배열

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N = 0, M = 0;

    std::cin >> N >> M;
    for (int row = 1; row <= N; row++) {
        for (int column = 1; column <= N; column++) {
            int number = 0;
            std::cin >> number;

            if (row == 1) {
                sumArray[row][column] = sumArray[row][column - 1] + number;
            }
            else if (column == 1) {
                sumArray[row][column] = sumArray[row - 1][column] + number;
            }
            else {
                sumArray[row][column] = sumArray[row - 1][column] + sumArray[row][column - 1] + number - sumArray[row - 1][column - 1];
            }
        }
    }

    for (int i = 0; i < M; i++) {
        int x1 = 0, y1 = 0, x2 = 0, y2 = 0, answer = 0;
        std::cin >>  x1 >> y1 >> x2 >> y2;
        answer = sumArray[x2][y2] - sumArray[x1 - 1][y2] - sumArray[x2][y1 - 1] + sumArray[x1 - 1][y1 - 1];
        std::cout << answer << '\n';
    }

    return 0;
}