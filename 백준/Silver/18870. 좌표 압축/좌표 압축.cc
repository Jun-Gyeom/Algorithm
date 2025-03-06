#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N = 0, number = 0;
    std::vector<long> coordinates, sortedCoordinates;   // 좌표를 입력받을 벡터, 좌표를 정렬한 벡터
    std::map<long, int> compressionCoordinates;         // 각 좌표가 압축된 값을 저장할 맵

    // 입력
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        long coordinate = 0;
        std::cin >> coordinate;
        coordinates.push_back(coordinate);
    }

    // 좌표 압축 알고리즘
    {
        sortedCoordinates = coordinates;
        std::sort(sortedCoordinates.begin(), sortedCoordinates.end());

        compressionCoordinates[sortedCoordinates[0]] = number++;
        long previousCoordinate = sortedCoordinates[0];

        for (int i = 1; i < sortedCoordinates.size(); i++) {
            if (sortedCoordinates[i] > previousCoordinate) {
                compressionCoordinates[sortedCoordinates[i]] = number++;
                previousCoordinate = sortedCoordinates[i];
            }
        }
    }

    // 출력
    for (int i = 0; i < coordinates.size(); i++) {
        std::cout << compressionCoordinates[coordinates[i]] << '\n';
    }

    return 0;
}
