#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int maxAnswer = -2147483648, minAnswer = 2147483647;
int N;
int A, B, C, D;
vector<int> sequence;

void BackTracking(int k, int result);

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N;
	sequence.resize(N, 0);
	for (int i = 0; i < N; i++) {
		cin >> sequence[i];
	}
	cin >> A >> B >> C >> D;

	BackTracking(0, sequence[0]);
	cout << maxAnswer << '\n';
	cout << minAnswer << '\n';

	return 0; 
}

void BackTracking(int k, int result) {
	if (k == N - 1) {
		if (result > maxAnswer) {
			maxAnswer = result;
		}
		if (result < minAnswer) {
			minAnswer = result;
		}
		return;
	}

	if (A > 0) {
		A--;
		BackTracking(k + 1, result + sequence[k + 1]);
		A++;
	}
	if (B > 0) {
		B--;
		BackTracking(k + 1, result - sequence[k + 1]);
		B++;
	}
	if (C > 0) {
		C--;
		BackTracking(k + 1, result * sequence[k + 1]);
		C++;
	}
	if (D > 0) {
		D--;
		int next = result / sequence[k + 1];
		if (result < 0 && sequence[k + 1] > 0 || result > 0 && sequence[k + 1] < 0) {
			next = -(abs(result) / abs(sequence[k + 1]));
		}
		BackTracking(k + 1, next);
		D++;
	}
}
