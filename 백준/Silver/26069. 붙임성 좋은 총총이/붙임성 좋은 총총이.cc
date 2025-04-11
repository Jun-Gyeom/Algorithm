#include <iostream>
#include <unordered_map>
using namespace std;

#define NAME "ChongChong"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0;
    cin >> N;

    unordered_map<string, bool> dance;
    dance[NAME] = true;
    for (int i = 0; i < N; i++) {
        string people1, people2;
        cin >> people1 >> people2;
        if (dance[people1]) {
            dance[people2] = true;
        }
        else if (dance[people2]) {
            dance[people1] = true;
        }
    }

    int answer = 0;
    for (auto it : dance) {
        if (it.second) {
            answer++;
        }
    }
    cout << answer << '\n';

    return 0;
}
