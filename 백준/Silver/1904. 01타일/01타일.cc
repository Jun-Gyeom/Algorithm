#include <iostream>
using namespace std;

#define MODULAR 15746

int DP[1000001];

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N = 0;
	cin >> N;

	DP[1] = 1;
	DP[2] = 2;
	for (int i = 3; i <= N; i++) {
		DP[i] = (DP[i - 1] + DP[i - 2]) % MODULAR;
	}
	cout << DP[N] << '\n';
	
	return 0; 
}

