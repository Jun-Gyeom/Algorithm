#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int score = 0;
		int comboScore = 0;
		string str;
		cin >> str;
		for (int j = 0; j < str.length(); j++) {
			if (str[j] == 'O') {
				comboScore++;
				score += comboScore;
			}
			else {
				comboScore = 0;
			}
		}
		cout << score << '\n';
	}
	return 0; 
}