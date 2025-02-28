#include <iostream>
#include <stack>
#include <vector>

int main(int argc, char* argv[]) {
    int n = 0, number = 1;
    std::stack<int> numbers;
    std::vector<char> result;
    bool hasResult = true;

    std::cin >> n;
    for (int i = 0; i < n; i++) {
        // 수열의 숫자 입력 받기
        int targetNumber = 0;
        std::cin >> targetNumber;

        // 만들어야 하는 수열의 수가 오름차순 자연수 보다 크거나 같다면 => 만들어야 하는 수열의 수와 같아질 때까지 push 후 출력을 위해 마지막 한번만 pop 함.
        if (targetNumber >= number) {
            while (targetNumber >= number) {
                numbers.push(number);
                result.push_back('+');
                number++;
            }
            numbers.pop();
            result.push_back('-');
        }
        else {
            // 스택의 top이 만들어야 하는 수열의 수 보다 크다면 수열을 만들 수 없으므로 NO 출력 후 반복문 종료.
            if (numbers.top() > targetNumber) {
                hasResult = false;
                std::cout << "NO";
                break;
            }
            else if (numbers.top() == targetNumber) {
                numbers.pop();
                result.push_back('-');
            }
        }
    }

    // 결과 출력
    if (hasResult) {
        for (int i = 0; i < result.size(); i++) {
            std::cout << result[i] << '\n';
        }
    }

    return 0;
}
