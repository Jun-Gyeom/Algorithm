#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N = 0;
    std::cin >> N;

    std::vector graph(N, std::vector(N, 0));
    std::vector visited(N, std::vector(N, false));
    std::stack<std::pair<int, int>> stack;

    int dx[4] = { -1, 0, 1, 0 };
    int dy[4] = { 0, -1, 0, 1 };

    for (int y = 0; y < N; y++) {
        std::string houses;
        std::cin >> houses;
        for (int x = 0; x < N; x++) {
            graph[y][x] = houses[x] - '0';
        }
    }

    int number = 0;
    for (int y = 0; y < N; y++) {
        for (int x = 0; x < N; x++) {
            if (graph[y][x] == 1 && !visited[y][x]) {
                number++;
                stack.push(std::make_pair(y, x));
                visited[y][x] = true;
                graph[y][x] = number;

                // dfs 알고리즘
                while (!stack.empty()) {
                    std::pair<int, int> currentNode = stack.top();
                    stack.pop();

                    for (int i = 0; i < 4; i++) {
                        std::pair<int, int> newNode = std::make_pair(currentNode.first + dy[i], currentNode.second + dx[i]);
                        if (newNode.first >= 0 && newNode.first < N && newNode.second >= 0 && newNode.second < N ) {
                            if (graph[newNode.first][newNode.second] == 1 && !visited[newNode.first][newNode.second]) {
                                stack.push(newNode);
                                visited[newNode.first][newNode.second] = true;
                                graph[newNode.first][newNode.second] = number;
                            }
                        }
                    }
                }
            }
        }
    }

    int answers[number + 1] = {0};
    for (int i = 1; i <= number; i++) {
        int amount = 0;

        for (int y = 0; y < N; y++) {
            for (int x = 0; x < N; x++) {
                if (i == graph[y][x])
                    amount++;
            }
        }
        answers[i] = amount;
    }

    std::cout << number << '\n';
    std::sort(answers + 1, answers + number + 1);
    for (int i = 1; i <= number; i++) {
        std::cout << answers[i] << '\n';
    }

    return 0;
}
