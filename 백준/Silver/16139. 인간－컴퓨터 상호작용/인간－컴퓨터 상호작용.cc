#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false); 
	cin.tie(nullptr);
	cout.tie(nullptr);

	string S;
	cin >> S;

	vector<vector<int>> alphabet(S.length() + 1, vector<int>(26, 0));
	for (int i = 1; i <= S.length(); i++) {
		for (int j = 0; j < 26; j++) {
			alphabet[i][j] = alphabet[i - 1][j];
			if (j == S[i - 1] - 'a') {
				alphabet[i][j]++;
			}
		}
	}

	int q = 0;
	cin >> q;

	for (int i = 0; i < q; i++) {
		char a = '\0';
		int l = 0, r = 0;

		cin >> a >> l >> r;
		cout << alphabet[r + 1][a - 'a'] - alphabet[l][a - 'a'] << '\n';
	}

	return 0; 
}
