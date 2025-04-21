#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int N, answer = 2147483647;
vector<vector<int>> ability;
vector<bool> team;

void BackTracking(int index, int k);

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N;
	ability.resize(N, vector<int>(N, 0));
	team.resize(N, false);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> ability[i][j];
		}
	}

	BackTracking(0, 0);
	cout << answer << '\n';
	return 0; 
}

void BackTracking(int index, int k) {
	if (k == N / 2) {
		vector<int> startTeam, linkTeam;
		for (int i = 0; i < N; i++) {
			if (team[i]) {
				startTeam.push_back(i);
			}
			else {
				linkTeam.push_back(i);
			}
		}

		int start = 0, link = 0;
		for (int i = 0; i < N / 2; i++) {
			for (int j = 0; j < N / 2; j++) {
				if (i == j) continue;

				start += ability[startTeam[i]][startTeam[j]];
				link += ability[linkTeam[i]][linkTeam[j]];
			}
		}

		int result = abs(start - link);
		if (result < answer) {
			answer = result;
		}

		return;
	}

	for (int i = index; i < N; i++) {
		if (team[i]) continue;

		team[i] = true;
		BackTracking(i, k + 1);
		team[i] = false;
	}
}
