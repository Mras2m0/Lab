#include <iostream>
#include <windows.h>

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int mat[100][100];
    int n, m;

    std::cout << "Введите размеры матрицы N (строки) и M (столбцы) до 100: ";
    if (!(std::cin >> n >> m) || n <= 0 || m <= 0 || n > 100 || m > 100) return 1;

    std::cout << "Введите элементы матрицы: " << std::endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> mat[i][j];
        }
    }

    int min_val = mat[0][0];
    int min_col = 0; 

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (mat[i][j] < min_val) {
                min_val = mat[i][j];
                min_col = j;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        if (mat[i][min_col] < 0) {
            mat[i][min_col] = 0;
        }
    }

    std::cout << "Результат (столбец " << min_col << " обработан):" << std::endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << mat[i][j] << "\t";
        }
        std::cout << '\n';
    }

    return 0;
}