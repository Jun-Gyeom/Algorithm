#include <iostream>
#include <vector>
using namespace std;

vector<int> sequence;

void BackTracking(int n, int m, int k);

int main(int argc, char* argv[]) {

	int N = 0, M = 0;
	cin >> N >> M;
	sequence.resize(M, 0);
	BackTracking(N, M, 0);

	return 0; 
}

void BackTracking(int n, int m, int k) {
	if (k == m) {
		for (int i = 0; i < m; i++) {
			cout << sequence[i] << ' ';
		}
		cout << '\n';
		return;
	}

	for (int i = 1; i <= n; i++) {
		if (k >= 1 && sequence[k - 1] > i) continue;

		sequence[k] = i;
		BackTracking(n, m, k + 1);
	}
}