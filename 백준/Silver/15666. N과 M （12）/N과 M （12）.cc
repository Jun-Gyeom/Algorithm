#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
vector<int> number;
vector<int> sequence;

void BackTracking(int k);

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false); 
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N >> M;
	number.resize(N, 0);
	sequence.resize(M, 0);

	for (int i = 0; i < N; i++) {
		cin >> number[i];
	}
	sort(number.rbegin(), number.rend());

	BackTracking(0);
	
	return 0; 
}

void BackTracking(int k) {
	if (k == M) {
		for (int i = 0; i < M; i++) {
			cout << sequence[i] << ' ';
		}
		cout << '\n';

		return;
	}

	for (int i = N - 1; i >= 0; i--) {
		if (k != 0 && sequence[k - 1] > number[i]) continue;
		if (i >= 1 && number[i - 1] == number[i]) continue;

		sequence[k] = number[i];
		BackTracking(k + 1);
	}
}
