#include <iostream>
#include <stdint.h>
#include "Data.hpp"

int main()
{
    Data mydata("Darkest secret");
    Data *data_ptr = &mydata;

    std::cout << "Original data: " << mydata.getData() << std::endl;
    std::cout << "serialize and deserialize data: " << deserialize(serialize(data_ptr))->getData() << std::endl;

    return 0;
}