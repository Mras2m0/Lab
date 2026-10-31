#include <iostream>
#include <Windows.h>

int getFirstDigit(unsigned int x) {
    while (x >= 10) {
        x /= 10;
    }
    return x;
}
int getMaxDigit(unsigned int x) {
    int max_digit = 0;
    while (x > 0) {
        if (x % 10 > max_digit) max_digit = x % 10;
        x /= 10;
    }
    return max_digit;
}

bool swap(unsigned int a, unsigned int b) {
    int firstA = getFirstDigit(a), firstB = getFirstDigit(b);
    if (firstA != firstB) {
        return (firstA > firstB);
    } else {
        int maxA = getMaxDigit(a), maxB = getMaxDigit(b);
        if (maxA != maxB) {
            return (maxA > maxB);
        } else {
            return (a > b);
        }
    }
}

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    
    unsigned int array[1000];
    int n;
    
    std::cout << "Введите размер последовательности (до 1000): ";
    if (!(std::cin >> n) || n <= 0 || n > 1000) return 1;

    std::cout << "Введите " << n << " чисел: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> array[i];
    }

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (swap(array[i], array[j])) {
                unsigned int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }

    std::cout << "Отсортированный массив: ";
    for (int i = 0; i < n; ++i) std::cout << array[i] << " " << std::endl;

    return 0;
}