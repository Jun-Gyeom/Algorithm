#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    unsigned int N = 0;
    cin >> N;
    cout << static_cast<int>(sqrt(N)) << '\n';

    return 0;
}
