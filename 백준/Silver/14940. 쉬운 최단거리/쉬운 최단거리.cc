#include <iostream>
#include <vector>
#include <queue>

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n = 0, m = 0, answer = 0;
    std::cin >> n >> m;

    std::vector<std::vector<int>> graph(n, std::vector<int>(m));
    std::vector<std::vector<int>> visited(n, std::vector<int>(m));
    std::queue<std::pair<int, int>> queue;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int number = 0;
            std::cin >> number;
            graph[i][j] = number;
            if (number == 2) {
                std::pair<int, int> pair = std::make_pair(i, j);
                queue.push(pair);
                graph[i][j] = 0;
            }
        }
    }

    int dy[4] = { 0, -1, 0, 1 };
    int dx[4] = { -1, 0, 1, 0 };

    // bfs 알고리즘
    while (!queue.empty()) {
        std::pair<int, int> currentNode = queue.front();
        queue.pop();
        visited[currentNode.first][currentNode.second] = true;

        for (int i = 0; i < 4; i++) {
            int newY = currentNode.first + dy[i];
            int newX = currentNode.second + dx[i];
            if (newY >= 0 && newY < n && newX >= 0 && newX < m && !visited[newY][newX]) {
                if (graph[newY][newX] == 1) {
                    queue.push(std::make_pair(newY, newX));
                    visited[newY][newX] = true;
                    graph[newY][newX] = graph[currentNode.first][currentNode.second] + 1;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!visited[i][j] && graph[i][j] != 0)
                graph[i][j] = -1;

            std::cout << graph[i][j] << ' ';
        }
        std::cout << '\n';
    }
}

