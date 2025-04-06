#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0;
    cin >> N;

    unordered_map<int, int> cards;
    for (int i = 0; i < N; i++) {
        int card = 0;
        cin >> card;
        cards[card]++;
    }

    int M = 0;
    cin >> M;
    for (int i = 0; i < M; i++) {
        int card = 0;
        cin >> card;
        cout << cards[card] << ' ';
    }

    return 0;
}
