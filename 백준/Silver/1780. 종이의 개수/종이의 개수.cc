#include <iostream>
using namespace std;

int quadTree[2187][2187];
int answer[3];

void recursion(int k, int x, int y);

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false); 
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> quadTree[i][j];
		}
	}

	recursion(N, 0, 0);
	for (int i = 0; i < 3; i++) {
		cout << answer[i] << '\n';
	}

	return 0; 
}

void recursion(int k, int x, int y) {
	bool isDiffrent = false;
	int currentTile = quadTree[y][x];
	for (int i = y; i < k + y; i++) {
		for (int j = x; j < k + x; j++) {
			if (quadTree[i][j] != currentTile) {
				isDiffrent = true;
				break;
			}
		}
		if (isDiffrent) break;
	}
	
	if (isDiffrent) {
		int divide = k / 3;
		recursion(divide, x, y);
		recursion(divide, x + divide, y);
		recursion(divide, x + divide * 2, y);

		recursion(divide, x, y + divide);
		recursion(divide, x + divide, y + divide);
		recursion(divide, x + divide * 2, y + divide);

		recursion(divide, x, y + divide * 2);
		recursion(divide, x + divide, y + divide * 2);
		recursion(divide, x + divide * 2, y + divide * 2);
		return;
	}
	
	if (currentTile == -1) {
		answer[0]++;
	}
	else if (currentTile == 0) {
		answer[1]++;
	}
	else if (currentTile == 1) {
		answer[2]++;
	}
}