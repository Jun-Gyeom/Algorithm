#include <iostream>
using namespace std;

#define ull unsigned long long

ull DP[101];

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	DP[1] = 1;
	DP[2] = 1;
	DP[3] = 1;
	DP[4] = 2;
	DP[5] = 2;
	for (int i = 6; i <= 100; i++) {
		DP[i] = DP[i - 1] + DP[i - 5];
	}

	int T = 0;
	cin >> T;
	for (int t = 0; t < T; t++) {
		int N = 0;
		cin >> N;
		cout << DP[N] << '\n';
	}

	return 0; 
}

