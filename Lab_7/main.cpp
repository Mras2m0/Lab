#include <iostream>
#include <windows.h>
#include "matrix.hpp" 

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int matrix[100][100];
    int n;

    Lab7::readMatrix(matrix, n);
    
    std::cout << "\nИсходная матрица:\n";
    Lab7::printMatrix(matrix, n);

    Lab7::processMatrix(matrix, n);

    std::cout << "\nИтоговая матрица:\n";
    Lab7::printMatrix(matrix, n);

    return 0;
}