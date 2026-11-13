namespace Lab7 {
    // Функция чтения матрицы
    void readMatrix(int mat[100][100], int &n);

    // Функция вывода матрицы на экран 
    void printMatrix(int mat[100][100], int n);

    // Функция проверки наличия цифр 3 или 5
    bool hasDigit3or5(int num);

    // Функция проверки ВСЕХ диагоналей (главной и побочной)
    bool checkDiagonalsCondition(int mat[100][100], int n);

    // Главная функция обработки матрицы
    void processMatrix(int mat[100][100], int n);
}