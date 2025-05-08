#include <iostream>
#include <vector>
using namespace std;

#define ll long long

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false); 
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N = 0, M = 0;
	cin >> N >> M;

	vector<ll> array(M + 1, 0);
	ll sum = 0;
	for (int i = 0; i < N; i++) {
		ll A = 0;
		cin >> A;
		sum += A;
		array[sum % M]++;
	}

	ll answer = array[0];
	for (int i = 0; i < M; i++) {
		answer += array[i] * (array[i] - 1) / 2;
	}
	cout << answer << '\n';

	return 0; 
}
