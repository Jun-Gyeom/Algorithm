#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int DP[301];

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false); 
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N = 0;
	cin >> N;

	vector<int> points(N + 1, 0);
	for (int i = 1; i <= N; i++) {
		cin >> points[i];
	}

	DP[1] = points[1];
	DP[2] = DP[1] + points[2];
	for (int i = 3; i <= N; i++) {
		DP[i] = max(DP[i - 2] + points[i], DP[i - 3] + points[i - 1] + points[i]);
	}
	cout << DP[N] << '\n';

	return 0; 
}

