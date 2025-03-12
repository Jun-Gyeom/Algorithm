#include <iostream>
#include <vector>
#include <queue>

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N = 0, M = 0, answer = 0;
    bool able = true;
    std::cin >> M >> N;

    std::queue<std::pair<int, int>> queue;
    std::vector<std::vector<int>> graph(N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            int value = 0;
            std::cin >> value;
            graph[i].push_back(value);
            if (value == 1) {
                std::pair<int, int> pair = std::make_pair(i, j);
                queue.push(pair);
            }
        }
    }

    while (!queue.empty()) {
        int dx[4] = { -1, 0, 1, 0 };
        int dy[4] = { 0, -1, 0, 1 };
        std::pair<int, int> current = queue.front();
        queue.pop();

        for (int i = 0; i < 4; i++) {
            std::pair<int, int> pair = std::make_pair(current.first + dy[i], current.second + dx[i]);
            int newY = current.first + dy[i];
            int newX = current.second + dx[i];
            if (newY < N && newY >= 0 && newX < M && newX >= 0)
                if (graph[newY][newX] == -0) {
                    graph[newY][newX] = graph[current.first][current.second] + 1;
                    queue.push(pair);
                }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (graph[i][j] == 0) {
                answer = 0;
                able = false;
                break;
            }
            else if (graph[i][j] > answer)
                answer = graph[i][j];
        }
        if (!able)
            break;
    }

    std::cout << answer - 1;
}

