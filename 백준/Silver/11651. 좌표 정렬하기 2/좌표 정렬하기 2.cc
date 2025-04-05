#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define POINT pair<int, int>

bool compare(const POINT& a, const POINT& b);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0;
    cin >> N;

    vector<POINT> points(N, make_pair(0, 0));
    for (int i = 0; i < N; i++) {
        cin >> points[i].first >> points[i].second;
    }
    sort(points.begin(), points.end(), compare);

    for (int i = 0; i < N; i++) {
        cout << points[i].first << ' ' << points[i].second << '\n';
    }

    return 0;
}

bool compare(const POINT& a, const POINT& b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    return a.second < b.second;
}