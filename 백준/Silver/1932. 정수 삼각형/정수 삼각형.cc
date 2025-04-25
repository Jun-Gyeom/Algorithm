#include <iostream>
#include <cmath>
using namespace std;

int DP[501][501];

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false); 
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			int number = 0;
			cin >> number;

			DP[i][j] = number + max(DP[i - 1][j - 1], DP[i - 1][j]);
		}
	}

	int answer = 0;
	for (int i = 1; i <= n; i++) {
		answer = max(answer, DP[n][i]);
	}
	cout << answer << '\n';

	return 0; 
}

