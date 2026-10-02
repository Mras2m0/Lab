#include <iostream>
#include <climits>
#include <cfloat>
#include <windows.h>

int main() {

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    char c = 'a';
    short s = -1234;
    int i = 42;
    long long ll = 123456789012345;
    unsigned int ui = 4000000000;
    float f = 3.14f;
    double d = 2.7182818;
    bool b = true;

    std::cout << "Тип: char        Значение: " << char(c - 32) << " Размер: " << sizeof(char) << " мин: " << CHAR_MIN << " макс: " << CHAR_MAX << std::endl;
    std::cout << "Тип: short       Значение: " << s << " Размер: " << sizeof(short) << " мин: " << SHRT_MIN << " макс: " << SHRT_MAX << std::endl;
    std::cout << "Тип: int         Значение: " << i << " Размер: " << sizeof(int) << " мин: " << INT_MIN << " макс: " << INT_MAX << std::endl;
    std::cout << "Тип: long long   Значение: " << ll << " Размер: " << sizeof(long long) << " мин: " << LLONG_MIN << " макс: " << LLONG_MAX << std::endl;
    std::cout << "Тип: unsigned    Значение: " << ui << " Размер: " << sizeof(unsigned int) << " мин: " << 0 << " макс: " << UINT_MAX << std::endl;
    std::cout << "Тип: float       Значение: " << f << " Размер: " << sizeof(float) << " мин: " << -FLT_MAX << " макс: " << FLT_MAX << std::endl;
    std::cout << "Тип: double      Значение: " << d << " Размер: " << sizeof(double) << " мин: " << -DBL_MAX << " макс: " << DBL_MAX << std::endl;
    std::cout << "Тип: bool        Значение: " << b << " Размер: " << sizeof(bool) << " мин: " << 0 << " макс: " << 1 << std::endl;

    return 0;
}