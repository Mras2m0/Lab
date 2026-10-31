#include <iostream>
#include <windows.h>

bool hasDuplicateDigits(unsigned int x) {
    while (x > 0) {
        unsigned int current_digit = x % 10; 
        unsigned int all = x / 10;     

        while (all > 0) {
            if (all % 10 == current_digit) {
                return true; 
            }
            all /= 10; 
        }
        
        x /= 10; 
    }
    return false; 
}

bool hasDigit5(unsigned int x) {
    while (x > 0) {
        if (x % 10 == 5) return true;
        x /= 10;
    }
    return false;
}

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    const int MAX_SIZE = 20000;
    unsigned int arr[MAX_SIZE];
    int n;

    std::cout << "Введите размер последовательности (до 10000): ";
    if (!(std::cin >> n) || n <= 0 || n > 10000) return 1;

    std::cout << "Введите " << n << " чисел: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    // 1. УДАЛЕНИЕ
    int new_n = 0;
    for (int i = 0; i < n; ++i) { 
        if (!hasDuplicateDigits(arr[i])) { 
            arr[new_n] = arr[i];    
            new_n++;
        }
    }
    n = new_n; 

    // 2. ДУБЛИРОВАНИЕ
    for (int i = n - 1; i >= 0; --i) {
        if (hasDigit5(arr[i])) { 
            for (int j = n; j > i; --j) {
                arr[j] = arr[j - 1]; 
            }
            arr[i + 1] = arr[i]; 
            n++;
        } 
    } 

    std::cout << "Итоговая последовательность: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}