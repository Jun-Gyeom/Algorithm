#include <iostream>
#include <vector>
#include <algorithm>

#define ull unsigned long long

bool compare(std::pair<ull, ull> a, std::pair<ull, ull> b);

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N = 0, answer = 0;
    std::cin >> N;

    std::vector<std::pair<ull, ull>> meetings(N);

    for (int i = 0; i < N; i++) {
        int start = 0, end = 0;
        std::cin >> start >> end;
        meetings[i] = std::make_pair(start, end);
    }

    // 현재 회의가 가능한 시간부터 회의의 종료 시간이 가장 적은 수가 가장 회의가 빨리 끝남. -> 종료 시간이 빠른 순서로 정렬한다. 단, 종료 시간이 같은 경우에는 둘 중 시작 시간이 빠른 순서로 정렬한다.
    // 한 개의 회의가 가장 빨리 끝나는 해만 찾는 걸 반복하면 회의를 가장 많이 할 수 있는 횟수가 얼마인지 알 수 있음.

    std::sort(meetings.begin(), meetings.end(), compare);

    ull lastTime = 0;
    for (int i = 0; i < N; i++) {
        if (meetings[i].first >= lastTime) {
            answer++;
            lastTime = meetings[i].second;
        }
    }
    std::cout << answer;

    return 0;
}

bool compare(std::pair<ull, ull> a, std::pair<ull, ull> b) {
    return a.second == b.second ? a.first < b.first : a.second < b.second;
}