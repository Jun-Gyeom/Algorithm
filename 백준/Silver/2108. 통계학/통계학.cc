#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define MAX_VALUE 4000

vector<int> numberCount(MAX_VALUE * 2 + 1, 0);

bool compare(const int& a, const int& b);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0;
    cin >> N;

    vector<int> numbers(N, 0);
    double sum = 0.0;
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
        sum += numbers[i];
    }
    sort(numbers.begin(), numbers.end());

    double a = sum / N, b = numbers[N / 2], c = 0.0, d = numbers[N - 1] - numbers[0];

    // 최빈값 계산
    for (int i = 0; i < N; i++) {
        const int index = numbers[i] + MAX_VALUE;
        numberCount[index]++;
    }
    sort(numbers.begin(), numbers.end(), greater<int>());
    stable_sort(numbers.begin(), numbers.end(), compare);
    int maxNumberCount = numberCount[numbers[N - 1] + MAX_VALUE];
    if (N >= 2 && maxNumberCount == numberCount[numbers[N - maxNumberCount - 1] + MAX_VALUE]) {
        c = numbers[N - maxNumberCount - 1];
    }
    else {
        c = numbers[N - 1];
    }

    cout << round(a) + 0.0 << '\n' << b << '\n' << c << '\n' << d << '\n';

    return 0;
}

bool compare(const int& a, const int& b) {
    return numberCount[a + MAX_VALUE] < numberCount[b + MAX_VALUE];
}