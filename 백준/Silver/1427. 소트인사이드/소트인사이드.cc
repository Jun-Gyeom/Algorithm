#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<int> numbers;

    string N;
    cin >> N;

    for (int i = 0; i < N.length(); i++) {
        numbers.push_back(N[i] - '0');
    }
    sort(numbers.rbegin(), numbers.rend());

    for (int i = 0; i < N.length(); i++) {
        cout << numbers[i];
    }
    
    return 0;
}