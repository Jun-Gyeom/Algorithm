#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
vector<int> number;
vector<int> sequence;
vector<bool> visited;

void BackTracking(int k);

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false); 
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N >> M;
	number.resize(N, 0);
	sequence.resize(M, 0);
	visited.resize(N, false);

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
		if (visited[i]) continue;
		if (i >= 1 && number[i - 1] == number[i] && !visited[i - 1]) continue;

		sequence[k] = number[i];
		visited[i] = true;
		BackTracking(k + 1);
		visited[i] = false;
	}
}
