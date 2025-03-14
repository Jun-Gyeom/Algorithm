#include <iostream>
#include <vector>
#include <queue>

struct Position {
    int x;
    int y;
    int z;
    Position(int _x, int _y, int _z) : x(_x), y(_y), z(_z) {}
};

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int M = 0, N = 0, H = 0, answer = 0;
    bool hasAnswer = false;
    std::cin >> M >> N >> H;

    std::vector graph(H, std::vector(N, std::vector(M, 0)));
    std::vector visited(H, std::vector(N, std::vector(M, false)));
    std::queue<Position> queue;

    for (int z = 0; z < H; z++) {
        for (int y = 0; y < N; y++) {
            for (int x = 0; x < M; x++) {
                std::cin >> graph[z][y][x];
                if (graph[z][y][x] == 1) {
                    Position position(x, y, z);
                    queue.push(position);
                    visited[z][y][x] = true;
                    graph[z][y][x] = 0;
                }
            }
        }
    }

    int dx[6] = { -1, 0, 1, 0, 0, 0 };
    int dy[6] = { 0, -1, 0, 1, 0, 0 };
    int dz[6] = { 0, 0, 0, 0, 1, -1 };

    // bfs 알고리즘
    while (!queue.empty()) {
        Position currentNode = queue.front();
        queue.pop();

        for (int i = 0; i < 6; i++) {
            Position newNode(currentNode.x + dx[i], currentNode.y + dy[i], currentNode.z + dz[i]);
            if (newNode.x >= 0 && newNode.x < M && newNode.y >= 0 && newNode.y < N && newNode.z >= 0 && newNode.z < H ) {
                if (graph[newNode.z][newNode.y][newNode.x] == 0 && !visited[newNode.z][newNode.y][newNode.x]) {
                    queue.push(newNode);
                    visited[newNode.z][newNode.y][newNode.x] = true;
                    graph[newNode.z][newNode.y][newNode.x] = graph[currentNode.z][currentNode.y][currentNode.x] + 1;
                }
            }
        }
    }

    for (int z = 0; z < H; z++) {
        for (int y = 0; y < N; y++) {
            for (int x = 0; x < M; x++) {
                if (!visited[z][y][x] && graph[z][y][x] != -1) {
                    answer = -1;
                    hasAnswer = true;
                    break;
                }
                if (graph[z][y][x] > answer)
                    answer = graph[z][y][x];
            }
            if (hasAnswer)
                break;
        }
        if (hasAnswer)
            break;
    }
    std::cout << answer;

    return 0;
}
