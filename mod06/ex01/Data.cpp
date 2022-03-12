#include "Data.hpp"

Data::Data(std::string data): data(data) {};

Data::Data(const Data& copy)
{
    this->data = copy.getData();
};

Data& Data::operator=(const Data& source)
{
    if (this == &source)
        return (*this);
    this->data = source.getData();
    return (*this);
};

Data::~Data() {};
        
void Data::setData(std::string data)
{
    this->data = data;
};

std::string Data::getData(void) const
{
    return this->data;
};