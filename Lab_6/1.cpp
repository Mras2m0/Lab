#include <iostream>
#include <Windows.h>

int SumOfDigits(unsigned int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    
    std::cout << "Задание 1" << std::endl;
    unsigned int array[10000];
    int n;

    std::cout << "Введите размер последовательности (до 10000): ";
    if (!(std::cin >> n) || n <= 0 || n > 10000) {
        return 1;
    }

    bool needs_sorting = false;
    std::cout << "Введите " << n << " чисел последовательности: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> array[i];
        if (!needs_sorting && SumOfDigits(array[i]) == 14) {
            needs_sorting = true;      
        }
    }
    if (needs_sorting) {    
        for (int i = 0; i < n - 1; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (array[i] > array[j]) {
                    unsigned int tmp = array[i];
                    array[i] = array[j];
                    array[j] = tmp;
                }   
            }
        }
        std::cout << "Условие выполнено. Массив отсортирован: ";
    } else {
        std::cout << "Чисел с суммой цифр 14 нет. Исходный массив: ";
    }
    for (int i = 0; i < n; ++i) std::cout << array[i] << " " << std::endl;
    return 0;
}