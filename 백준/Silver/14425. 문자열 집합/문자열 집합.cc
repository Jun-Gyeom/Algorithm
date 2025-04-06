#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0, M = 0, answer = 0;
    cin >> N >> M;

    set<string> words;
    for (int i = 0; i < N; i++) {
        string word;
        cin >> word;
        words.insert(word);
    }

    for (int i = 0; i < M; i++) {
        string word;
        cin >> word;
        if (words.find(word) != words.end()) {
            answer++;
        }
    }
    cout << answer << '\n';

    return 0;
}
