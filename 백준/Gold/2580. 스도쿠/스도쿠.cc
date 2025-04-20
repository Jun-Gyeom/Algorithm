#include <iostream>
#include <vector>
using namespace std;

#define SIZE	9
#define EMPTY	0

vector<pair<int, int>> blanks;
bool isSolved;

void BackTracking(int k, vector<vector<int>>& bord);

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	vector<vector<int>> bord(SIZE, vector<int>(SIZE, EMPTY));
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			cin >> bord[i][j];
			if (bord[i][j] == EMPTY) {
				blanks.push_back(make_pair(i, j));
			}
		}
	}

	BackTracking(0, bord);
	
	return 0; 
}

void BackTracking(int k, vector<vector<int>>& bord) {
	if (isSolved) return;
	if (k == blanks.size()) {
		for (int i = 0; i < SIZE; i++) {
			for (int j = 0; j < SIZE; j++) {
				cout << bord[i][j] << ' ';
			}
			cout << '\n';
		}
		isSolved = true;
		return;
	}

	int i = blanks[k].first;
	int j = blanks[k].second;

	vector<bool> used(SIZE + 1, false);

	// 같은 행에 있는 숫자 제거
	for (int column = 0; column < SIZE; column++) {
		used[bord[i][column]] = true;
	}

	// 같은 열에 있는 숫자 제거
	for (int row = 0; row < SIZE; row++) {
		used[bord[row][j]] = true;
	}

	// 같은 3 by 3 정사각형에 있는 숫자 제거
	for (int row = i / 3 * 3; row < (i / 3 + 1) * 3; row++) {
		for (int column = j / 3 * 3; column < (j / 3 + 1) * 3; column++) {
			used[bord[row][column]] = true;
		}
	}

	// used 배열을 사용하여 사용되지 않은 숫자가 있다면 bord의 현재 좌표에 해당 숫자를 대입하고 백트래킹
	for (int n = 1; n <= SIZE; n++) {
		if (used[n]) continue;

		bord[i][j] = n;
		BackTracking(k + 1, bord);
		bord[i][j] = EMPTY;
	}
}
