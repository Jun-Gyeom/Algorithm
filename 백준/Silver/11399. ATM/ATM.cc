#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N = 0, answer = 0;
    std::vector<int> times(1, 0);

    std::cin >> N;
    for (int i = 0; i < N; i++) {
        int time = 0;
        std::cin >> time;
        times.push_back(time);
    }

    std::sort(times.begin(), times.end());
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        answer += times[i] + sum;
        sum += times[i];
    }
    std::cout << answer;

    return 0;
}
