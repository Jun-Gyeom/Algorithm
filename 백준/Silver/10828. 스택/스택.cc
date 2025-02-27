#include <iostream>
#include <string>
#include <vector>

#define MAX_SIZE 10000

class MyIntStack {
public:
    MyIntStack() {
        amount = 0;
    }

    void push(int item) {
        vector.push_back(item);
        amount++;
    }

    int pop() {
        if (amount <= 0) return -1;

        vector.erase(vector.begin() + amount - 1);
        amount--;
        return vector[amount];  
    }

    int size() { return amount; }
    bool empty() { return amount == 0; }

    int top() {
        if (amount <= 0) return -1;

        return vector[amount - 1];
    }

    ~MyIntStack() { }
private:
    std::vector<int> vector;
    int amount;
};

int main(int argc, char* argv[]) {
    MyIntStack myStack;
    int N = 0;

    std::cin >> N;
    std::cin.ignore();
    for (int i = 0; i < N; i++) {
        std::string command;
        std::getline(std::cin, command);

        if (command.find("push") != std::string::npos) {
            int item = stoi(command.substr(5));
            myStack.push(item);
        }
        else if (command == "pop") {
            std::cout << myStack.pop() << '\n';
        }
        else if (command == "size") {
            std::cout << myStack.size() << '\n';
        }
        else if (command == "empty") {
            std::cout << (int)myStack.empty() << '\n';
        }
        else if (command == "top") {
            std::cout << myStack.top() << '\n';
        }
    }

    return 0;
}
