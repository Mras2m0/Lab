/*// Вариант 3
// 6 байт
#include <iostream>
#include <windows.h>

int main() {

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    
    unsigned short at, bt;

    std::cout << "Введите два числа: ";
    std::cin >> at;
    std::cout << "Второе число: ";
    std::cin >> bt;
    uint8_t a = at;
    uint8_t b = bt;
    std::cout << "Периметр прямоугольника: " << 2 * (a + b) << std::endl;

    return 0;
}
*/
// 3 байта (4 байта)

#include <iostream>
#include <windows.h>

int main() {

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    
    unsigned short cash;
    uint8_t a;

    std::cout << "Введите первую сторону прямоугольника: ";
    std::cin >> cash;
    a = cash;
    std::cout << "Введите вторую сторону прямоугольника: ";
    std::cin >> cash;
    std::cout << "Периметр прямоугольника: " << 2 * (a + cash) << std::endl;

    return 0;
}
/*
#include <iostream>
#include <windows.h>

int main() {

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    
    unsigned short a,b;

    std::cout << "Введите первую сторону прямоугольника: ";
    std::cin >> a;
    std::cout << "Введите вторую сторону прямоугольника: ";
    std::cin >> b;
    std::cout << "Периметр прямоугольника: " << 2 * (a + b) << std::endl;

    return 0;
}
*/