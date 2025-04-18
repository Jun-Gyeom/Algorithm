#include <iostream>
#include <vector>
using namespace std;

vector<bool> isUsedColumn, isUsedDiagonal1, isUsedDiagonal2;
int answer;

void BackTracking(int n, int row);

int main(int argc, char* argv[]) {

	int N = 0;
	cin >> N;

	isUsedColumn.resize(N, false);
	isUsedDiagonal1.resize(N * 2 - 1, false);
	isUsedDiagonal2.resize(N * 2 - 1, false);

	BackTracking(N, 0);
	cout << answer << '\n';

	return 0; 
}

void BackTracking(int n, int row) {
	if (row == n) {
		answer++;
		return;
	}

	for (int column = 0; column < n; column++) {
		if (isUsedColumn[column] || isUsedDiagonal1[row - column + n - 1] || isUsedDiagonal2[row + column]) continue;

		isUsedColumn[column] = isUsedDiagonal1[row - column + n - 1] = isUsedDiagonal2[row + column] = true;
		BackTracking(n, row + 1);
		isUsedColumn[column] = isUsedDiagonal1[row - column + n - 1] = isUsedDiagonal2[row + column] = false;
	}
}