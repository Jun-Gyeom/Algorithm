#include <iostream>
#include <cmath>
using namespace std;

int DP[1001][1001];

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false); 
	cin.tie(nullptr);
	cout.tie(nullptr);

	string sequence[2];
	cin >> sequence[0] >> sequence[1];

	for (int i = 1; i <= sequence[0].length(); i++) {
		for (int j = 1; j <= sequence[1].length(); j++) {
			if (sequence[0][i - 1] == sequence[1][j - 1]) {
				DP[i][j] = DP[i - 1][j - 1] + 1;
				continue;
			}

			DP[i][j] = max(DP[i][j - 1], DP[i - 1][j]);
		}
	}
	cout << DP[sequence[0].length()][sequence[1].length()] << '\n';

	return 0; 
}
