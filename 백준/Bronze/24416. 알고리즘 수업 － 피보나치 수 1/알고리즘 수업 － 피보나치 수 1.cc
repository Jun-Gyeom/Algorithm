#include <iostream>
using namespace std;

int DP[41];

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N = 0;
	cin >> N;

	DP[1] = 1;
	DP[2] = 1;
	
	int number = 0;
	for (int i = 3; i <= N; i++) {
		DP[i] = DP[i - 2] + DP[i - 1];
		number++;
	}
	cout << DP[N] << ' ' << number << '\n';

	return 0; 
}

