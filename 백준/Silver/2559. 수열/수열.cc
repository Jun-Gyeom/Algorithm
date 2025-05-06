#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false); 
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N = 0, K = 0;
	cin >> N >> K;

	vector<int> sequence(N + 1, 0);
	vector<int> sum(N + 1, 0);
	for (int i = 1; i <= N; i++) {
		cin >> sequence[i];
		sum[i] = sum[i - 1] + sequence[i];
	}

	int left = 0, right = 0;
	for (int i = 0; i < K; i++) {
		right++;
	}

	int answer = INT32_MIN;
	while (right <= N) {
		answer = max(answer, sum[right] - sum[left]);
		left++;
		right++;
	}
	cout << answer << '\n';

	return 0; 
}
