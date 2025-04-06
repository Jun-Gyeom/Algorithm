#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0;
    cin >> N;

    set<int> cards;
    for (int i = 0; i < N; i++) {
        int card = 0;
        cin >> card;
        cards.insert(card);
    }

    int M = 0;
    cin >> M;
    for (int i = 0; i < M; i++) {
        int card = 0;
        cin >> card;
        cout << (cards.find(card) != cards.end()) << ' ';
    }

    return 0;
}
