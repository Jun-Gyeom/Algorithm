#include <iostream>
using namespace std;

#define NOTE_NUMBER 8

int main(int argc, char* argv[]) {
	int previousNote = 0;
	int note;
	int number = 0;
	string result;

	for (int i = 0; i < NOTE_NUMBER; i++) {
		cin >> note;
		if (i != 0) {
			if (note == previousNote + 1) {
				number++;
			}
			else if (note == previousNote - 1) {
				number--;
			}
		}
		previousNote = note;
	}

	if (number >= NOTE_NUMBER - 1) {
		result = "ascending";
	}
	else if (number <= -NOTE_NUMBER + 1) {
		result = "descending";
	}
	else {
		result = "mixed";
	}
	cout << result;
	return 0; 
}