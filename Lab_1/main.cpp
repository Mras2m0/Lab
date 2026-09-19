#include <iostream>
#include <climits>
#include <cfloat>

int main() {

    char c = 'a';
    short s = -1234;
    int i = 42;
    long long ll = 123456789012345;
    unsigned int ui = 4000000000;
    float f = 3.14f;
    double d = 2.7182818;
    bool b = true;

    std::cout << "Type: " << "char " << "Value: " << char(c - 32) << " " << "Size: " << sizeof(char) << " " << "min: " << CHAR_MIN << " " << "max: " << CHAR_MAX << std::endl;
    std::cout << "Type: " << "short " << "Value: " << s << " " << "Size: " << sizeof(short) << " " << "min: " << SHRT_MIN << " " << "max: " << SHRT_MAX << std::endl;
    std::cout << "Type: " << "int " << "Value: " << i << " " << "Size: " << sizeof(int) << " " << "min: " << INT_MIN << " "<< "max: "  << INT_MAX << std::endl;
    std::cout << "Type: " << "long_long " << "Value: " << ll << " " << "Size: " << sizeof(long long) << " " << "min: " << LLONG_MIN << " " << "max: " << LLONG_MAX << std::endl;
    std::cout << "Type: " << "unsigned_int " << "Value: " << ui << " " << "Size: " << sizeof(unsigned int) << " " << "min: " << 0 << " " << "max: " << UINT_MAX << std::endl;
    std::cout << "Type: " << "float " << "Value: " << f << " " << "Size: " << sizeof(float) << " " << "min: " << -FLT_MAX << " " << "max: " << FLT_MAX << std::endl;
    std::cout << "Type: " << "double " << "Value: " << d << " " << "Size: " << sizeof(double) << " " << "min: " << -DBL_MAX << " " << "max: " << DBL_MAX << std::endl;
    std::cout << "Type: " << "bool " << "Value: " << b << " " << "Size: " << sizeof(bool) << " " << "min: " << 0 << " " << "max: " << 1 << std::endl;
    
    return 0;
}