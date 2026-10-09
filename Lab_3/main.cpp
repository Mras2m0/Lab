#include <iostream>
#include <windows.h>

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    unsigned int x;
    unsigned short i;

    std::cout << "Введите число x (от 1 до 10^9):" << std::endl;
    std::cin >> x;
    
    std::cout << "Введите номер бита i(от 0 до 31):" << std::endl;
    std::cin >> i;

    unsigned short bitValue = (x >> i) & 1;
    std::cout << "Значение бита " << i << " числа " << x << " равно: " << bitValue << std::endl;
}