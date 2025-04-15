#include <iostream>
#include <vector>
using namespace std;

void mergeSort(vector<int>& list, int left, int right, int* answer, int* count);
void merge(vector<int>& list, int left, int mid, int right, int* answer, int* count);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0, K = 0;
    cin >> N >> K;

    vector<int> numbers(N, 0);
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }

    int answer = 0;
    int count = K;
    mergeSort(numbers, 0, numbers.size() - 1, &answer, &count);
    if (-(count - K) < K) {
        answer = -1;
    }
    cout << answer << '\n';

    return 0;
}

void mergeSort(vector<int>& list, int left, int right, int* answer, int* count) {
    if (left >= right) return;

    int mid = (left + right) / 2;
    mergeSort(list, left, mid, answer, count);
    mergeSort(list, mid + 1, right, answer, count);
    merge(list, left, mid, right, answer, count);
}

void merge(vector<int>& list, int left, int mid, int right, int* answer, int* count) {
    int i = left, j = mid + 1;

    vector<int> temp;
    while (i <= mid && j <= right) {
        if (list[i] <= list[j]) {
            temp.push_back(list[i++]);
        }
        else {
            temp.push_back(list[j++]);
        }
    }

    while (i <= mid) temp.push_back(list[i++]);
    while (j <= right) temp.push_back(list[j++]);

    for (int i = 0; i < temp.size(); ++i) {
        list[left + i] = temp[i];
        (*count)--;
        if (*count == 0) {
            *answer = temp[i];
        }
    }
}