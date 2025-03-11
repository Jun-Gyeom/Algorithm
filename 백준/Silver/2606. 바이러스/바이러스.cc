#include <iostream>
#include <vector>
#include <stack>

void dfs(int _start, const std::vector<int> _graph[], std::vector<bool>& _visited);

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N = 0, M = 0, answer = 0;
    std::cin >> N >> M;

    std::vector<int> graph[N + 1];
    std::vector<bool> visited(N + 1, false);

    for (int i = 0; i < M; i++) {
        int a = 0, b = 0;
        std::cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(1, graph, visited);
    for (int i = 1; i < visited.size(); i++) {
        if (visited[i] == true)
            answer++;
    }
    std::cout << answer - 1;

    return 0;
}

void dfs(int _start, const std::vector<int> _graph[], std::vector<bool>& _visited) {
    std::stack<int> _stack;
    _stack.push(_start);
    _visited[_start] = true;

    while (!_stack.empty()) {
        int currentNode = _stack.top();
        _stack.pop();

        if (!_visited[currentNode])
            _visited[currentNode] = true;

        for (auto it = _graph[currentNode].begin(); it != _graph[currentNode].end(); ++it) {
            if (!_visited[*it])
                _stack.push(*it);
        }
    }
}