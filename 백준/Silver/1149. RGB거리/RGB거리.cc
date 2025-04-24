#include <iostream>
#include <cmath>
using namespace std;

int DP[1001][3];

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N = 0;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		int r = 0, g = 0, b = 0;
		cin >> r >> g >> b;

		DP[i][0] = min(DP[i - 1][1], DP[i - 1][2]) + r;
		DP[i][1] = min(DP[i - 1][0], DP[i - 1][2]) + g;
		DP[i][2] = min(DP[i - 1][0], DP[i - 1][1]) + b;
	}

	cout << min(min(DP[N][0], DP[N][1]), DP[N][2]) << '\n';

	return 0; 
}

