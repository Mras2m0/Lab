#include "matrix.hpp"
#include <iostream>

namespace Lab7 {

    void readMatrix(int mat[][100], int &n) {
        std::cout << "Введите размер матрицы N (до 100): ";
        std::cin >> n;
        
        std::cout << "Введите элементы матрицы (" << n << "x" << n << "):\n";
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                std::cin >> mat[i][j];
            }
        }
    }

    void printMatrix(int mat[][100], int n) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                std::cout << mat[i][j] << "\t";
            }
            std::cout << '\n';
        }
    }

    bool hasDigit3or5(int num) {
        num = std::abs(num);
        
        while (num > 0) {
            int digit = num % 10;
            if (digit == 3 || digit == 5) return true;
            num /= 10;
        }
        return false;
    }

    bool checkDiagonalsCondition(int mat[][100], int n) {
        for (int i = 0; i < n; ++i) {
            // Элемент главной диагонали
            int main_diag = mat[i][i];
            
            // Элемент побочной диагонали 
            // (индекс столбца идет с конца: n-1, минус текущий шаг i)
            int sec_diag = mat[i][n - 1 - i]; 
            
            // Если хотя бы один элемент на ЛЮБОЙ из диагоналей не прошел проверку
            if (main_diag <= 0 || !hasDigit3or5(main_diag)) return false;
            if (sec_diag <= 0 || !hasDigit3or5(sec_diag)) return false;
        }
        return true; 
    }

    void processMatrix(int mat[][100], int n) {
        // Проверяем условие для всех диагональных элементов
        if (!checkDiagonalsCondition(mat, n)) {
            std::cout << "\nУсловие диагоналей НЕ выполнено. Матрица осталась без изменений.\n";
            return;
        }

        std::cout << "\nУсловие диагоналей ВЫПОЛНЕНО. Матрица обработана.\n";

        // Обрабатываем матрицу по столбцам (внешний цикл - j)
        for (int j = 0; j < n; ++j) {
            
            int min_val = mat[0][j];
            long long sum_of_squares = 0; 
            
            for (int i = 0; i < n; ++i) {
                if (mat[i][j] < min_val) {
                    min_val = mat[i][j];
                }
                sum_of_squares += mat[i][j] * mat[i][j];
            }

            for (int i = 0; i < n; ++i) {
                if (mat[i][j] == min_val) {
                    mat[i][j] = sum_of_squares; 
                }
            }
        }
    }

}