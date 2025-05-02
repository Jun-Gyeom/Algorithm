#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

#define ll long long

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false); 
	cin.tie(nullptr);
	cout.tie(nullptr);

	bool isSolve = false;

	int N = 0, K = 0;
	cin >> N >> K;

	vector<int> taste(N + 1, 0);
	int M = 0, m = 2147483647;
	for (int i = 1; i <= N; i++) {
		cin >> taste[i];
		M = max(M, taste[i]);
		m = min(m, taste[i]);
	}

	if (M > K) {
		cout << "0\n";
		isSolve = true;
	} 
	else if (m <= 0) {
		cout << "-1\n";
		isSolve = true;
	}

	if (!isSolve) {
		ll answer = 0;
		bool skip = false;
		for (int i = 1; i <= N; i++) {
			if (!skip && taste[i] == m) {
				skip = true;
				continue;
			}

			answer += (K - taste[i]) / m;
		}
		answer += 1;
		cout << answer << '\n';
	}

	return 0; 
}
