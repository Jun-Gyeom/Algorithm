#include <iostream>

static int D[2][41]; // 메모이제이션

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    D[0][0] = 1;
    D[0][1] = 0;
    D[1][0] = 0;
    D[1][1] = 1;

    int T = 0;
    std::cin >> T;
    for (int t = 0; t < T; t++) {
        int N = 0;
        std::cin >> N;

        // bottom-up 방식으로 DP(동적 계획법) 사용
        for (int i = 2; i <= N; i++) {
            if (D[0][N] == 0) {
                D[0][i] = D[0][i - 1] + D[0][i - 2];
                D[1][i] = D[1][i - 1] + D[1][i - 2];
            }
        }
        std::cout << D[0][N] << ' ' << D[1][N] << '\n';
    }

    return 0;
}