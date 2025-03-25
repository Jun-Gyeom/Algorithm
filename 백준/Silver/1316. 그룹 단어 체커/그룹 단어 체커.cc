#include <iostream>
using namespace std;

#define ALPHABET_NUMBER 26

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string alphabets[ALPHABET_NUMBER] = {
        "a", "b", "c", "d", "e", "f", "g", "h", "i", "j",
        "k", "l", "m", "n", "o", "p", "q", "r", "s", "t",
        "u", "v", "w", "x", "y", "z"
    };
    int N = 0, answer = 0;

    cin >> N;
    for (int i = 0; i < N; i++) {
        bool alphabetUsed[ALPHABET_NUMBER] = {false};
        bool isGroupWord = true;
        string word;

        cin >> word;
        for (int j = 0; j < ALPHABET_NUMBER; j++) {
            while (word.find(alphabets[j] + alphabets[j]) != string::npos) {
                word.replace(word.find(alphabets[j] + alphabets[j]), 2, alphabets[j]);
            }
        }

        for (int j = 0; j < word.length(); j++) {
            int index = word[j] - 'a';
            if (alphabetUsed[index]) {
                isGroupWord = false;
                break;
            }
            alphabetUsed[index] = true;
        }

        if (isGroupWord) {
            answer++;
        }
    }
    cout << answer << '\n';

    return 0;
}


