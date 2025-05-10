#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false); 
	cin.tie(nullptr);
	cout.tie(nullptr);

	string S = "";
	cin >> S;

	int answer = 0;
	string number = "";
	bool check = false;
	for (int i = 0; i < S.size(); i++) {
		if (S[i] == '+' || S[i] == '-') {
			if (check) {
				answer -= stoi(number);
			}
			else {
				answer += stoi(number);
			}
			number = "";
		}
		else {
			number += S[i];
		}

		if (S[i] == '-') check = true;
	}
	if (check) {
		answer -= stoi(number);
	}
	else {
		answer += stoi(number);
	}
	cout << answer << '\n';

	return 0; 
}
