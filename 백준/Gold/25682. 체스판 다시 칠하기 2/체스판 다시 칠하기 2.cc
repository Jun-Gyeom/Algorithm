#include <iostream>
#include <cmath>
using namespace std;

int B[2001][2001], W[2001][2001];

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false); 
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N = 0, M = 0, K = 0;
	cin >> N >> M >> K;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			bool isBlack = (i + j) % 2 == 0;
			B[i][j] = isBlack;
			W[i][j] = !isBlack;
		}
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			char input = '\0';
			cin >> input;
			bool tile = input == 'B';
			B[i][j] ^= tile;
			W[i][j] ^= tile;

			B[i][j] = B[i - 1][j] + B[i][j - 1] - B[i - 1][j - 1] + B[i][j];
			W[i][j] = W[i - 1][j] + W[i][j - 1] - W[i - 1][j - 1] + W[i][j];
		}
	}

	int answer = INT32_MAX;
	for (int i = 0; i + K <= N; i++) {
		for (int j = 0; j + K <= M; j++) {
			answer = min(answer, B[i + K][j + K] - B[i][j + K] - B[i + K][j] + B[i][j]);
			answer = min(answer, W[i + K][j + K] - W[i][j + K] - W[i + K][j] + W[i][j]);
		}
	}
	cout << answer << '\n';

	return 0; 
}
