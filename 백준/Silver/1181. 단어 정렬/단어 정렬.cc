#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

bool compare(const string& a, const string& b);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0;
    cin >> N;

    vector<string> words;
    set<string> duplication;
    for (int i = 0; i < N; i++) {
        string word;
        cin >> word;
        if (duplication.find(word) == duplication.end()) {
            duplication.insert(word);
            words.push_back(word);
        }
    }

    sort(words.begin(), words.end(), compare);
    for (int i = 0; i < words.size(); i++) {
        cout << words[i] << '\n';
    }

    return 0;
}

bool compare(const string& a, const string& b) {
    if (a.length() == b.length()) {
        int index = 0;
        while (a[index] == b[index]) {
            index++;
        }
        return a[index] < b[index];
    }
    return a.length() < b.length();
}