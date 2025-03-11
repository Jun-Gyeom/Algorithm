#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

void dfs(int _start, const std::vector<int> _graph[], std::vector<bool>& _visited);
void bfs(int _start, const std::vector<int> _graph[], std::vector<bool>& _visited);

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N = 0, M = 0, V = 0;
    std::cin >> N >> M >> V;

    std::vector<int> graph[N + 1];
    std::vector<bool> visited(N + 1, false);

    for (int i = 0; i < M; i++) {
        int a = 0, b = 0;
        std::cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for (int i = 1; i <= N; i++) {
        std::sort(graph[i].begin(), graph[i].end());
    }

    dfs(V, graph, visited);
    std::cout << '\n';
    for (auto element : visited)
        element = false;
    bfs(V, graph, visited);

    return 0;
}

void dfs(int _start, const std::vector<int> _graph[], std::vector<bool>& _visited) {
    std::stack<int> _stack;
    _stack.push(_start);

    while (!_stack.empty()) {
        int currentNode = _stack.top();
        _stack.pop();

        if (!_visited[currentNode]) {
            std::cout << currentNode << ' ';
            _visited[currentNode] = true;
        }

        for (auto it = _graph[currentNode].rbegin(); it != _graph[currentNode].rend(); ++it) {
            if (!_visited[*it])
                _stack.push(*it);
        }
    }
}

void bfs(int _start, const std::vector<int> _graph[], std::vector<bool>& _visited) {
    std::queue<int> _queue;
    _queue.push(_start);

    while (!_queue.empty()) {
        int currentNode = _queue.front();
        _queue.pop();

        if (!_visited[currentNode]) {
            std::cout << currentNode << ' ';
            _visited[currentNode] = true;
        }

        for (auto it = _graph[currentNode].begin(); it != _graph[currentNode].end(); ++it) {
            if (!_visited[*it])
                _queue.push(*it);
        }
    }
}