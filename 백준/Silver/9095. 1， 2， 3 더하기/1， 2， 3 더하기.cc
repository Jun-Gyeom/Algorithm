#include <iostream>
#define MAX 11

static int DP[MAX + 1];

int sum123(int n);

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int T = 0, n = 0;
    std::cin >> T;
    for (int t = 1; t <= T; t++) {
        std::cin >> n;
        std::cout << sum123(n) << '\n';
    }

    return 0;
}

int sum123(int n) {
    if (n == 1)
        return DP[1] = 1;

    else if (n == 2)
        return DP[2] = 2;

    else if (n == 3)
        return DP[3] = 4;

    else if (n > 3) {
        return DP[n] = sum123(n - 3) + sum123(n - 2) + sum123(n - 1);
    }
}
