#include <iostream>
#include <string>
using namespace std;

bool quadTree[64][64];

string recursion(int n, int x, int y);

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false); 
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		string line = "";
		cin >> line;
		for (int j = 0; j < N; j++) {
			quadTree[i][j] = line[j] == '1';
		}
	}

	cout << recursion(N, 0, 0) << '\n';

	return 0; 
}

string recursion(int n, int x, int y) {
	bool isDiffrent = false;
	bool currentTile = quadTree[y][x];
	for (int i = y; i < n + y; i++) {
		for (int j = x; j < n + x; j++) {
			if (quadTree[i][j] != currentTile) {
				isDiffrent = true;
				break;
			}
		}
		if (isDiffrent) break;
	}
	
	if (isDiffrent) {
		string result = "(";
		result += recursion(n / 2, x, y);
		result += recursion(n / 2, x + n / 2, y);
		result += recursion(n / 2, x, y + n / 2);
		result += recursion(n / 2, x + n / 2, y + n / 2);
		result += ")";

		return result;
	}
	
	return currentTile ? "1" : "0";
}