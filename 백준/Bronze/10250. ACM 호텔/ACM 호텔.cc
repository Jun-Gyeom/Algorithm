#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char* argv[]) {
	int h, w, n;	// 호텔의 층 수, 각 층의 방 수, 몇 번째 손님인지 

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;
		int floor = 0;
		int room = 1;

		while (n > 0) {
			n--;
			floor++;
			if (floor > h) {
				floor = 1;
				room++;
			}
		}

		cout << floor << setfill('0') << setw(2) << room << '\n';
	}
	return 0;
}