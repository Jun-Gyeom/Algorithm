#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int DP[101][100001];	

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false); 
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N = 0, K = 0;
	cin >> N >> K;

	vector<int> W(N + 1, 0);
	vector<int> V(N + 1, 0);
	for (int i = 1; i <= N; i++) {
		cin >> W[i] >> V[i];
	}

	for (int limit = 1; limit <= K; limit++) {
		for (int i = 1; i <= N; i++) {
			if (limit < W[i]) {
				DP[i][limit] = DP[i - 1][limit];
				continue;
			}

			DP[i][limit] = max(DP[i - 1][limit - W[i]] + V[i], DP[i - 1][limit]);
		}
	}
	cout << DP[N][K] << '\n';

	return 0; 
}
