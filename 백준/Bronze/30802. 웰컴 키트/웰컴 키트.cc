#include <iostream>

#define NUMBER_OF_SIZE 6

int main(int argc, char* argv[]) {
    long n = 0;                             // 참가자의 수
    long applicant[NUMBER_OF_SIZE] = {};    // 티셔츠 사이즈 별 신청자 수
    long t, p = 0;                          // 티셔츠와 펜의 묶음 수
    int resultOfShirt = 0;

    // 입력
    std::cin >> n;
    for (int i = 0; i < NUMBER_OF_SIZE; i++) {
        std::cin >> applicant[i];
    }
    std::cin >> t >> p;

    // 티셔츠를 T장씩 최소 몇 묶음 주문해야 하는지 출력
    for (int i = 0; i < NUMBER_OF_SIZE; i++) {
        resultOfShirt += applicant[i] / t;
        if (applicant[i] % t != 0) resultOfShirt++;
    }
    std::cout << resultOfShirt << '\n';

    // 펜을 P자루씩 최대 몇 묶음 주문할 수 있는지와, 그때 펜을 한 자루씩 몇 개 주문하는지 출력
    std::cout << n / p << ' ' << n % p;

    return 0;
}
