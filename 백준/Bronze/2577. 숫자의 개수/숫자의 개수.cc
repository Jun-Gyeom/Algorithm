#include <iostream>
#include <string>
using namespace std;

#define NOTE_NUMBER 8

int main(int argc, char* argv[]) {
	int number[10] = {};
	int a, b, c;
	cin >> a >> b >> c;
	string str = to_string(a * b * c);

	for (int i = 0; i < str.length(); i++) {
		number[str[i] - '0']++;
	}

	for (int i = 0; i < sizeof(number) / sizeof(int); i++) {
		cout << number[i] << '\n';
	}

	return 0; 
}