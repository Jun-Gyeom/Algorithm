#include <iostream>
#include <iomanip>
using namespace std;

#define LINE 20

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    double sum = 0, mod = 0;

    for (int i = 0; i < LINE; i++) {
        string subjectName;
        double credit = 0.0;
        string grade;

        cin >> subjectName >> credit >> grade;
        if (grade == "A+") {
            grade = "4.5";
        }
        else if (grade == "A0") {
            grade = "4.0";
        }
        else if (grade == "B+") {
            grade = "3.5";
        }
        else if (grade == "B0") {
            grade = "3.0";
        }
        else if (grade == "C+") {
            grade = "2.5";
        }
        else if (grade == "C0") {
            grade = "2.0";
        }
        else if (grade == "D+") {
            grade = "1.5";
        }
        else if (grade == "D0") {
            grade = "1.0";
        }
        else if (grade == "F") {
            grade = "0.0";
        }
        else if (grade == "P") {
            grade = "0.0";
            credit = 0.0;
        }

        sum += credit * stod(grade);
        mod += credit;
    }

    if (mod == 0) {
        cout << std::fixed << std::setprecision(6) << 0.0 << '\n';
    }
    else {
        cout << std::fixed << std::setprecision(6) << sum / mod << '\n';
    }

    return 0;
}


