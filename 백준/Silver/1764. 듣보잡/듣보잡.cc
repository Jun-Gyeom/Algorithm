#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::map<std::string, bool> data;
    std::vector<std::string> answer;
    int N = 0, M = 0;
    std::cin >> N >> M;

    for (int i = 0; i < N; i++) {
        std::string input;
        std::cin >> input;
        data[input] = true;
    }

    for (int i = 0; i < M; i++) {
        std::string input;
        std::cin >> input;
        if (data[input])
            answer.push_back(input);
    }

    std::sort(answer.begin(), answer.end());
    std::cout << answer.size() << '\n';
    for (int i = 0; i < answer.size(); i++)
        std::cout << answer[i] << '\n';

    return 0;
}
