#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
	string a, b, c;
	cin >> a >> b >> c;

	cout << stoi(a) + stoi(b) - stoi(c) << '\n';
	cout << stoi(a + b) - stoi(c);
	return 0;
}