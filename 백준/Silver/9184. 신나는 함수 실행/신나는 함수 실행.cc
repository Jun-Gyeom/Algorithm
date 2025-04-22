#include <iostream>
using namespace std;

int DP[21][21][21];

int w(int a, int b, int c);

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int a = 0, b = 0, c = 0;
	while (true) {
		cin >> a >> b >> c;
		if (a == -1 && b == -1 && c == -1) break;

		cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << '\n';
	}
	
	return 0; 
}


int w(int a, int b, int c) {
	if (a <= 0 || b <= 0 || c <= 0) 
		return 1;

	if (a > 20 || b > 20 || c > 20)
		return w(20, 20, 20);

	if (DP[a][b][c] != 0)
		return DP[a][b][c];

	if (a < b && b < c) 
		return DP[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);

	return DP[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
}

