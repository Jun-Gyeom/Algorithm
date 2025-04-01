#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0;
    cin >> N;

    vector<pair<double, double>> points(N);
    for (int i = 0; i < N; i++) {
        double x = 0, y = 0;
        cin >> x >> y;
        points[i] = make_pair(x, y);
    }

    int M = 0;
    cin >> M;
    for (int i = 0; i < M; i++) {
        int P = 0;
        cin >> P;

        double answer = 0.0;
        int destination = 0;
        cin >> destination;
        double curX = points[destination].first;
        double curY = points[destination].second;
        for (int j = 1; j < P; j++) {
            cin >> destination;
            double a = 0, b = 0;
            if (points[destination].first > curX) {
                a = points[destination].first - curX;
            }
            else {
                a = curX - points[destination].first;
            }
            if (points[destination].second > curY) {
                b = points[destination].second - curY;
            }
            else {
                b = curY - points[destination].second;
            }
            curX = points[destination].first;
            curY = points[destination].second;

            answer += sqrt(a * a + b * b);
        }
        cout << round(answer) << '\n';
    }

    return 0;
}