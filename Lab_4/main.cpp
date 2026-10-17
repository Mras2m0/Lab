#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);    
    
    unsigned int a,b,c;
    std::cout << "Задание 1" << std::endl;
    std::cout << "Введите три числа:";
    std::cin >> a >> b >> c;
    if ((a > b) && (b > c)) {
       std::cout << "a - b - c: " << a-b-c << std::endl;
    }
    else if ((b > a) && (b % c == 0)) {
        std::cout << "b/c+b-a: " << b/c+b-a << std::endl;
    }
    else {
        std::cout << "a+b+c: " << a+b+c << std::endl;
    }

    std::cout << "Задание 2" << std::endl;
    int n;
    std::cout << "Введите цифру:";
    
    if (!(std::cin >> n)) {
        std::cout << "Критическая ошибка: введено не число!" << std::endl;
        return 1;
    }

    switch (n) {
        case 0:
            std::cout << "Ноль" << std::endl;
            break;
        case 1:
            std::cout << "Один" << std::endl;
            break;
        case 2:
            std::cout << "Два" << std::endl;
            break;
        case 3:
            std::cout << "Три" << std::endl;
            break;
        case 4:
            std::cout << "Четыре" << std::endl;
            break;
        case 5:
            std::cout << "Пять" << std::endl;
            break;
        case 6:
            std::cout << "Шесть" << std::endl;
            break;
        case 7:
            std::cout << "Семь" << std::endl;   
            break;
        case 8:
            std::cout << "Восемь" << std::endl;
            break;
        case 9:
            std::cout << "Девять" << std::endl; 
            break;
        default:
            std::cout << "Ошибка: введена не цифра" << std::endl;
            break;
    }

    std::cout << "Задание 3" << std::endl;
    int x;

    std::cout << "Введите значение x (1 или -1): ";
    std::cin >> x;
    /*
    if (!(std::cin >> x) || (x != 1 && x != -1)) {
        std::cout << "Ошибка: допускаются только значения 1 и -1." << std::endl;
        return 1;
    }
    */
    std::cout << (x == -1 ? "Negative number" : "Positive number") << std::endl;

    return 0;
}