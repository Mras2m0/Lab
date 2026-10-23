#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int a;
    int min_val = 100;
    int min_index = -1;
    int current_index = 1;
    long long product = 1;
    std::cout << "--- Задание 1 ---" << std::endl;
    std::cout << "Введите последовательность чисел (для завершения введите q):" << std::endl;
    while (std::cin >> a) {
        if ((a <= 20) && (a >= -2)) {
            product *= a;

            if (min_index == -1 || a < min_val) {
                min_val = a;
                min_index = current_index;
            }

        }
        current_index++;

    }

    if (min_index != -1) {
        std::cout << "Произведение чисел: " << product << std::endl;
        std::cout << "Минимальное число: " << min_val << std::endl;
        std::cout << "Порядковый номер минимального числа: " << min_index << std::endl;
    } else {
        std::cout << "Нет чисел в диапазоне от -2 до 20." << std::endl;
    }
    
    std::cin.clear();
    std::cin.ignore(32767, '\n'); 

    std::cout << "--- Задание 2 ---";
    unsigned int n;
    std::cout << "Введите натуральное число N(N < 10^9): " << std::endl;
    if (!(std::cin >> n) || (n == 0) || (n >= 1000000000)) {
        std::cerr << "Ошибка: введено недопустимое значение N." << std::endl;
        return 1;
    }

    int sum_even = 0;
    while (n > 0) {
        if ((n % 10) % 2 == 0) {
            sum_even += n % 10;
        }
        n /= 10;
    }
    std::cout << "Сумма четных цифр: " << sum_even << std::endl;
    return 0;

}