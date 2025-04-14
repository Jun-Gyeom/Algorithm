#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0;
    cin >> N;

    int answer = 0;
    unordered_map<string, bool> greet;
    for (int i = 0; i < N; i++) {
        string name;
        cin >> name;

        if (name == "ENTER") {
            greet.clear();
            continue;
        }

        if (!greet[name]) {
            answer++;
            greet[name] = true;
        }
    }
    cout << answer << '\n';

    return 0;
}
