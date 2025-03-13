#include <iostream>
#include <vector>
#include <stack>

void dfs(std::vector<std::vector<bool>>& _graph, int _startX, int _startY);

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int T = 0;
    std::cin >> T;

    for (int t = 0; t < T; t++) {
        int M = 0, N = 0, K = 0, answer = 0;
        std::cin >> M >> N >> K;

        std::vector graph(N, std::vector(M, false));

        for (int i = 0; i < K; i++) {
            int X = 0, Y = 0;
            std::cin >> X >> Y;
            graph[Y][X] = true;
        }

        for (int y = 0; y < N; y++) {
            for (int x = 0; x < M; x++) {
                if (graph[y][x] == true) {
                    dfs(graph, x, y);
                    answer++;
                }
            }
        }

        std::cout << answer << '\n';
    }
}

void dfs(std::vector<std::vector<bool>>& _graph, int _startX, int _startY) {
    std::stack<std::pair<int, int>> _stack;
    _stack.push(std::make_pair(_startX, _startY));
    int dy[4] = { 0, -1, 0, 1 };
    int dx[4] = { -1, 0, 1, 0 };

    while (!_stack.empty()) {
        int currentX = _stack.top().first;
        int currentY = _stack.top().second;
        _stack.pop();
        _graph[_startY][_startX] = false;

        for (int i = 0; i < 4; i++) {
            int newX = currentX + dx[i];
            int newY = currentY + dy[i];
            if (newX >= 0 && newX < _graph[0].size() && newY >= 0 && newY < _graph.size()) {
                if (_graph[newY][newX]) {
                    _stack.push(std::make_pair(newX, newY));
                    _graph[newY][newX] = false;
                }
            }
        }
    }
}
