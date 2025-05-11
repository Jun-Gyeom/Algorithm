#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

#define ull unsigned long long

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false); 
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N = 0;
	cin >> N;
	
	vector<ull> distance(N - 1, 0);
	for (int i = 0; i < N - 1; i++) {
		cin >> distance[i];
	}

	vector<ull> price(N, 0);
	for (int i = 0; i < N; i++) {
		cin >> price[i];
	}

	ull answer = 0;
	ull minPrice = price[0];
	for (int i = 0; i < N - 1; i++) {
		answer += distance[i] * minPrice;
		minPrice = min(minPrice, price[i + 1]);
	}
	cout << answer << '\n';

	return 0; 
}
