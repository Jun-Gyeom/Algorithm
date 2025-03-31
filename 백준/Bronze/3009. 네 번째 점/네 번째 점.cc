#include <iostream>
#include <set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x[3] = {0}, y[3] = {0};
    set<int> setX, setY;

    for (int i = 0; i < 3; i ++) {
        cin >> x[i] >> y[i];
        if (setX.find(x[i]) == setX.end()) {
            setX.insert(x[i]);
        }
        else {
            setX.erase(x[i]);
        }
        if (setY.find(y[i]) == setY.end()) {
            setY.insert(y[i]);
        }
        else {
            setY.erase(y[i]);
        }
    }

    cout << *setX.begin() << " " << *setY.begin() << '\n';

    return 0;
}