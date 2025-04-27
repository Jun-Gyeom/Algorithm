#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> DP(10001, 0);

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false); 
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n = 0; 
	cin >> n;

	vector<int> glass(n + 1, 0);
	for (int i = 1; i <= n; i++) {
		cin >> glass[i];
	}

	DP[1] = glass[1];
	if (n >= 2) DP[2] = glass[1] + glass[2];
	for (int i = 3; i <= n; i++) {
		DP[i] = max(DP[i - 3] + glass[i - 1] + glass[i], DP[i - 2] + glass[i]);
		DP[i] = max(DP[i], DP[i - 1]);
	}
	cout << DP[n] << '\n';

	return 0; 
}

