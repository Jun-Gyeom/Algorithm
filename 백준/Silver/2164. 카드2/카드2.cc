#include <iostream>
#include <queue>

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::queue<int> queue;
    bool isTrash = true;
    int N = 0;
    std::cin >> N;

    for (int i = 1; i <= N; i++) {
        queue.push(i);
    }

    while (queue.size() > 1) {
        if (isTrash) {
            queue.pop();
        }
        else {
            queue.push(queue.front());
            queue.pop();
        }
        isTrash = !isTrash;
    }

    std::cout << queue.front();

    return 0;
}

