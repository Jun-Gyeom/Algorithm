#include <iostream>
#include <string>
#include <vector>

class MyIntQueue {
public:
    MyIntQueue() {
        amount = 0;
    }

    void push(int item) {
        vector.push_back(item);
        amount++;
    }

    int pop() {
        if (amount <= 0) return -1;

        int num = vector[0];
        vector.erase(vector.begin());
        amount--;
        return num;
    }

    int size() { return amount; }
    bool empty() { return amount == 0; }

    int front() {
        if (amount <= 0) return -1;
        return vector[0];
    }

    int back() {
        if (amount <= 0) return -1;
        return vector[amount - 1];
    }

    ~MyIntQueue() { }
private:
    std::vector<int> vector;
    int amount;
};

int main(int argc, char* argv[]) {
    MyIntQueue myQueue;
    int N = 0;

    std::cin >> N;
    std::cin.ignore();
    for (int i = 0; i < N; i++) {
        std::string command;
        std::getline(std::cin, command);

        if (command.find("push") != std::string::npos) {
            int item = stoi(command.substr(5));
            myQueue.push(item);
        }
        else if (command == "pop") {
            std::cout << myQueue.pop() << '\n';
        }
        else if (command == "size") {
            std::cout << myQueue.size() << '\n';
        }
        else if (command == "empty") {
            std::cout << (int)myQueue.empty() << '\n';
        }
        else if (command == "front") {
            std::cout << myQueue.front() << '\n';
        }
        else if (command == "back") {
            std::cout << myQueue.back() << '\n';
        }
    }

    return 0;
}
