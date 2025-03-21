#include <iostream>
#include <vector>

std::vector<std::vector<int>> DP;
std::vector<int> A;
std::vector<int> answer;

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N = 0;
    std::cin >> N;

    DP.resize(N + 1);
    A.resize(N + 1, 0);

    for (int i = 1; i <= N; i++) {
        std::cin >> A[i];
    }

    for (int i = 1; i <= N; i++) {
        std::vector<int> max;
        for (int j = 1; j < i; j++) {
            if (A[j] < A[i]) {
                if (DP[j].size() > max.size()) {
                    max = DP[j];
                }
            }
        }
        DP[i] = max;
        DP[i].push_back(A[i]);
        if (DP[i].size() > answer.size()) {
            answer = DP[i];
        }
    }

    std::cout << answer.size() << '\n';
    for (int i = 0; i < answer.size(); i++) {
        std::cout << answer[i] << ' ';
    }

    return 0;
}

