#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define NUMBER 5

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int average = 0, middle = 0;
    int sum = 0;
    vector<int> numbers(NUMBER, 0);
    for (int i = 0; i < NUMBER; i++) {
        int number = 0;
        cin >> number;
        sum += number;
        numbers[i] = number;
    }

    sort(numbers.begin(), numbers.end());
    average = sum / NUMBER;
    middle = numbers[NUMBER / 2];

    cout << average << '\n' << middle << '\n';

    return 0;
}