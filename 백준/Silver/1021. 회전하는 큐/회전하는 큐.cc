#include <iostream>
#include <deque>

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::deque<int> deque;
    int N = 0, M = 0;
    int answer = 0;

    std::cin >> N >> M;
    for (int i = 1; i <= N; i++) {
        deque.push_back(i);
    }

    for (int i = 0; i < M; i++) {
        int target = 0, count = 0;
        std::cin >> target;

        while (target != deque.front()) {
            deque.push_back(deque.front());
            deque.pop_front();
            count++;
        }
        if (count > deque.size() / 2)
            count = deque.size() - count;
        deque.pop_front();

        answer += count;
    }

    std::cout << answer;

    return 0;
}

