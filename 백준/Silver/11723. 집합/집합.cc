#include <iostream>
#include <string>
#include <vector>

class MyIntSet {
public:
    MyIntSet(int _maximumNumber) {
        this->maximumNumber = _maximumNumber;
    }

    void add(int item) {
        // item의 값이 배열에 존재하는지 확인
        // 존재하지 않는다면 배열에 추가

        bool has = false;
        for (int i = 0; i < vector.size(); i++) {
            if (vector[i] == item) {
                has = true;
                break;
            }
        }

        if (!has) vector.push_back(item);
    }

    void remove(int item) {
        // item의 값이 배열에 존재하는지 확인
        // 존재한다면 배열에서 제거

        for (int i = 0; i < vector.size(); i++) {
            if (vector[i] == item) {
                vector.erase(vector.begin() + i);
                break;
            }
        }
    }

    bool check(int item) {
        // item의 값이 배열에 존재하는지 확인
        // 존재한다면 1을 반환, 아니라면 0을 반환

        bool has = false;
        for (int i = 0; i < vector.size(); i++) {
            if (vector[i] == item) {
                has = true;
                break;
            }
        }

        return has;
    }
    void toggle(int item) {
        // item의 값이 배열에 존재하는지 확인
        // 존재한다면 값을 제거, 아니라면 값을 추가

        bool has = false;
        for (int i = 0; i < vector.size(); i++) {
            if (vector[i] == item) {
                has = true;
                vector.erase(vector.begin() + i);
                break;
            }
        }

        if (!has) vector.push_back(item);
    }

    void all() {
        // 배열을 1부터 최대 수까지의 원소가 있는 배열로 만든다.

        std::vector<int> newVector;
        for (int i = 1; i <= maximumNumber; i++) {
            newVector.push_back(i);
        }

        vector = newVector;
    }

    void empty() {
        // 배열의 모든 원소를 삭제한다.

        while (vector.size() > 0) {
            vector.erase(vector.begin());
        }
    }

    ~MyIntSet() { }
private:
    int maximumNumber;
    std::vector<int> vector;
};

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    MyIntSet mySet(20);
    int N = 0;

    std::cin >> N;
    std::cin.ignore();
    for (int i = 0; i < N; i++) {
        std::string command;
        std::getline(std::cin, command);

        if (command.find("add") != std::string::npos) {
            int item = stoi(command.substr(4));
            mySet.add(item);
        }
        else if (command.find("remove") != std::string::npos) {
            int item = stoi(command.substr(7));
            mySet.remove(item);
        }
        else if (command.find("check") != std::string::npos) {
            int item = stoi(command.substr(6));
            std::cout << (int)mySet.check(item) << '\n';
            ;
        }
        else if (command.find("toggle") != std::string::npos) {
            int item = stoi(command.substr(7));
            mySet.toggle(item);
        }
        else if (command == "all") {
            mySet.all();
        }
        else if (command == "empty") {
            mySet.empty();
        }
    }

    return 0;
}
