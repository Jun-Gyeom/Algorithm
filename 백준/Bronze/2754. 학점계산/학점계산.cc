#include <iostream>

int main() {
    char rating[3];
    std::cin >> rating;

    double score = 0;
    switch (rating[0]) {
    case 'A':
        score = 4.0;
        break;
    case 'B':
        score = 3.0;
        break;
    case 'C':
        score = 2.0;
        break;
    case 'D':
        score = 1.0;
        break;
    case 'F':
        score = 0.0;
        break;
    default:
        break;
    }

    switch (rating[1]) {
    case '+':
        score += 0.3;
        break;
    case '-':
        score -= 0.3;
        break;
    default:
        break;
    }

    std::cout << std::fixed; 
    std::cout.precision(1);
    std::cout << score;

    return 0;
}

