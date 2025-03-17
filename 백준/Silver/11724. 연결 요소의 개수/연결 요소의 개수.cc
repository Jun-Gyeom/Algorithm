#include <iostream>
#include <vector>
#include <stack>

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N = 0, M = 0, answer = 0;
    std::cin >> N >> M;

    std::vector<int> graph[N + 1];
    std::vector visited(N + 1, false);
    std::stack<int> stack;

    for (int i = 1; i <= M; i++) {
        int u = 0, v = 0;
        std::cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            answer++;
            stack.push(i);
            visited[i] = true;

            // dfs 알고리즘
            while (!stack.empty()) {
                int currentNode = stack.top();
                stack.pop();

                for (int j = 0; j < graph[currentNode].size(); j++) {
                    int newNode = graph[currentNode][j];
                    if (!visited[newNode]) {
                        stack.push(newNode);
                        visited[newNode] = true;
                    }
                }
            }
        }
    }
    std::cout << answer;

    return 0;
}
