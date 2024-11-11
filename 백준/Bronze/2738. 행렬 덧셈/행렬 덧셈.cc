#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    int** matrixA = new int*[n];
    int** matrixB = new int*[n];
    for (int i = 0; i < n; i++) {
        matrixA[i] = new int[m];
        matrixB[i] = new int[m];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> matrixA[i][j]; 
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> matrixB[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << matrixA[i][j] + matrixB[i][j] << ' ';
        }
        std::cout << '\n';
    }

    for (int i = 0; i < n; i++) {
        delete[] matrixA[i];
        delete[] matrixB[i];
    }
    delete[] matrixA;
    delete[] matrixB; 

    return 0;
}

