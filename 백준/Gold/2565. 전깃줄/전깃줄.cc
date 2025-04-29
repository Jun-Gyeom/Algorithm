#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

vector<int> DP;

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false); 
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N = 0;
	cin >> N;
	DP.resize(N + 1, 0);

	vector<pair<int, int>> sequence(N + 1);
	for (int i = 1; i <= N; i++) {
		int A = 0, B = 0;
		cin >> A >> B;
		sequence[i] = make_pair(A, B);
	}
	sort(sequence.begin(), sequence.end());

	int LIS = 0;
	for (int i = 1; i <= N; i++) {
		int M = 0;
		for (int j = 1; j < i; j++) {
			if (sequence[j].second < sequence[i].second) {
				M = max(M, DP[j]);
			}
		}
		DP[i] = M + 1;
		LIS = max(LIS, DP[i]);
	}
	cout << N - LIS << '\n';
	
	return 0; 
}

