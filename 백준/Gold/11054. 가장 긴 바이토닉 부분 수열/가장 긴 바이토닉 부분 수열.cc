#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> DP[2];

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false); 
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N = 0;
	cin >> N;
	DP[0].resize(N + 1, 0);
	DP[1].resize(N + 1, 0);
	
	vector<int> sequence(N + 1, 0);
	for (int i = 1; i <= N; i++) {
		cin >> sequence[i];
	}

	// LIS 
	for (int i = 1; i <= N; i++) {
		int M = 0;
		for (int j = 1; j < i; j++) {
			if (sequence[j] < sequence[i]) {
				M = max(M, DP[0][j]);
			}
		}
		DP[0][i] = M + 1;
	}

	// LDS 
	for (int i = N; i >= 1; i--) {
		int M = 0;
		for (int j = N; j >= i; j--) {
			if (sequence[j] < sequence[i]) {
				M = max(M, DP[1][j]);
			}
		}
		DP[1][i] = M + 1;
	}

	int answer = 0;
	for (int i = 1; i <= N; i++) {
		answer = max(answer, DP[0][i] + DP[1][i] - 1);
	}
	cout << answer << '\n';

	return 0; 
}

