#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define PEOPLE pair<int, string>

bool compare(const PEOPLE& a, const PEOPLE& b);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0;
    cin >> N;

    vector<PEOPLE> peoples(N, make_pair(0, ""));
    for (int i = 0; i < N; i++) {
        cin >> peoples[i].first >> peoples[i].second;
    }

    stable_sort(peoples.begin(), peoples.end(), compare);
    for (int i = 0; i < N; i++) {
        cout << peoples[i].first << ' ' << peoples[i].second << '\n';
    }

    return 0;
}

bool compare(const PEOPLE& a, const PEOPLE& b) {
    return a.first < b.first;
}