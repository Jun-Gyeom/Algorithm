#include <iostream>
#include <string>
#include <map>

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N = 0, M = 0;
    std::map<std::string, int> pokemonIndex;
    std::map<int, std::string> pokemonName;

    std::cin >> N >> M;
    for (int i = 1; i <= N; i++) {
        std::string name;
        std::cin >> name;
        pokemonIndex[name] = i;
        pokemonName[i] = name;
    }

    for (int i = 0; i < M; i++) {
        std::string input;
        std::cin >> input;
        std::isdigit(input[0]) ? std::cout << pokemonName[std::stoi(input)] << '\n' : std::cout << pokemonIndex[input] << '\n';
    }

    return 0;
}