#include <iostream>
#include <windows.h>

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    // 1. Создаем переменную типа short (2 байта)
    short x;
    std::cout << "Введите число short: ";
    std::cin >> x;

    // 2. Создаем побайтовый указатель
    unsigned char* p = (unsigned char*)(&x);
    // 3. Выводим содержимое каждого байта
    std::cout << "Байт 0 (младший): " 
              << (int)*(p + 0) << '\n';
              
    std::cout << "Байт 1 (старший): " 
              << (int)*(p + 1) << '\n';

    return 0;
}