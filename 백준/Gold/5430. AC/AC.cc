#include <iostream>
#include <deque>
using namespace std;

bool R(bool _isReverse);
bool D(deque<int>& _deque, bool _isReverse);
void print(deque<int>& _deque, bool _isReverse, bool _isError);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t = 0;

    cin >> t;
    for (int i = 0; i < t; i++) {
        deque<int> deque;
        bool isError = false;
        bool isReverse = false;
        string p, array, element;
        int n = 0;
        int pointer = 1;
        int number = 0;

        cin >> p;
        cin >> n;
        cin >> array;
        while (n > 0 && pointer < array.length()) {
            if (array[pointer] == ',' || array[pointer] == ']') {
                number = stoi(element);
                deque.push_back(number);
                element = "";
                n--;
            }
            else {
                element += array[pointer];
            }
            pointer++;
        }
        for (char function : p) {
            switch (function) {
                case 'R':
                    isReverse = R(isReverse);
                    break;
                case 'D' :
                    isError = D(deque, isReverse);
                    break;
            }
            if (isError) break;
        }
        print(deque, isReverse, isError);
    }

    return 0;
}

bool R(bool _isReverse) {
    return !_isReverse;
}

bool D(deque<int>& _deque, const bool _isReverse) {
    if (_deque.empty()) {
        return true;
    }
    if (_isReverse) {
        _deque.pop_back();
    }
    else {
        _deque.pop_front();
    }
    return false;
}

void print(deque<int>& _deque, const bool _isReverse, const bool _isError) {
    if (_isError) {
        cout << "error\n";
        return;
    }

    cout << "[";
    while (!_deque.empty()) {
        if (_isReverse) {
            cout << _deque.back();
            _deque.pop_back();
        }
        else {
            cout << _deque.front();
            _deque.pop_front();
        }

        if (!_deque.empty()) {
            cout << ",";
        }
    }
    cout << "]\n";
}
