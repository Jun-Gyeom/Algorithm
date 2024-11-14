#include <iostream>
using namespace std;

#define ALPHABET_NUMBER 26

int main(int argc, char* argv[]) {
	int alphabetNumber[ALPHABET_NUMBER] = {};
	string word = "";
	char highAlphabet = '\0';
	int highNumber = 0;

	cin >> word;

	for (int i = 0; i < word.length(); i++) {
		// 소문자를 대문자로 변환 
		if (word[i] >= 'a' && word[i] <= 'z') {
			word[i] -= 'a' - 'A';
		}
		alphabetNumber[word[i] - 'A']++;
	}

	for (int i = 0; i < sizeof(alphabetNumber) / sizeof(int); i++) {
		// 가장 많이 등장한 알파벳의 개수 업데이트 
		if (alphabetNumber[i] > highNumber) {
			highNumber = alphabetNumber[i];
			highAlphabet = i + 'A';
		}
		else if (alphabetNumber[i] == highNumber) {
			highAlphabet = '?';
		}
	}

	cout << highAlphabet;
	return 0;
}