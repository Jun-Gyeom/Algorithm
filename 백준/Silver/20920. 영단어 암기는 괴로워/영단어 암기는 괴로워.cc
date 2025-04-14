#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

unordered_map<string, int> wordCount;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0, M = 0;
    cin >> N >> M;
    vector<string> words;
    for (int i = 0; i < N; i++) {
        string word;
        cin >> word;
        if (word.length() >= M) {
            if (wordCount[word] == 0) {
                words.push_back(word);
            }
            wordCount[word]++;
        }
    }
    sort(words.begin(), words.end());
    stable_sort(words.begin(), words.end(), [](string a, string b) -> bool { return a.length() > b.length(); });
    stable_sort(words.begin(), words.end(), [](string a, string b) -> bool { return wordCount[a] > wordCount[b]; });

    for (auto it = words.begin(); it != words.end(); ++it) {
        cout << *it << '\n';
    }

    return 0;
}
