#include "whatever.hpp"
#include <iostream>

template <typename Type>
void swap(Type& a, Type& b)
{
    Type tmp;

    tmp = a;
    a = b;
    b = tmp;
};

template <typename Type>
const Type& min(const Type& a, const Type& b)
{
    return (a < b) ? a : b;
};

template <typename Type>
const Type& max(const Type& a, const Type& b)
{
    return (a > b) ? a : b;
};

int main()
{
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}