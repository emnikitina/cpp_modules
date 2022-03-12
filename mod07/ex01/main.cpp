#include "iter.hpp"
#include <iostream>

template <typename T>
void iter(T* array, size_t size, void (*func)(const T&))
{
    size_t i = -1;

    std::cout << "---fuction iter---\n";
    while (++i < size)
        func(array[i]);

};

template <typename T>
void my_print(const T& a)
{
    std::cout << "string: " << a << std::endl;
}

int main()
{
    double array[7] = {5.17, 100, 52.63, 0, 982, 65.04, 99.99};
    std::string strArray[5] = {"hello", "world", "school 21", "x", "end"};

    iter(array, 7, &my_print);
    iter(strArray, 5, &my_print);
    return 0;
}