#include <iostream>
using namespace std;

int white, blue;
bool paper[128][128];

void recursion(int n, int x, int y);

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false); 
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> paper[i][j];
		}
	}

	recursion(N, 0, 0);
	cout << white << '\n';
	cout << blue << '\n';

	return 0; 
}

void recursion(int n, int x, int y) {
	bool isDiffrent = false;
	bool currentTile = paper[y][x];
	for (int i = y; i < n + y; i++) {
		for (int j = x; j < n + x; j++) {
			if (paper[i][j] != currentTile) {
				isDiffrent = true;
				break;
			}
		}
		if (isDiffrent) break;
	}
	
	if (isDiffrent) {
		recursion(n / 2, x, y);
		recursion(n / 2, x + n / 2, y);
		recursion(n / 2, x, y + n / 2);
		recursion(n / 2, x + n / 2, y + n / 2);
	}
	else {
		currentTile ? blue++ : white++;
	}
}