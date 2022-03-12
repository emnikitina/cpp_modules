#include "span.hpp"

const char* FullStoreException::what() const throw()
{
    return "Exception::Store is full";
};

const char* RangeOutException::what() const throw()
{
    return "Exception::Index out of range";
};

const char* NoSpanException::what() const throw()
{
    return "Exception::There is no span";
};

Span::Span(unsigned int n): lenght(n) {};

Span::Span(const Span& copy)
{
    this->lenght = copy.getSize();
    unsigned int i = 0;
    while (i < this->lenght)
    {
        this->store.push_back(copy.getStore()[i]);
        i++;
    }
};

Span& Span::operator=(const Span& source) 
{
    if (this == &source)
        return (*this);

    this->lenght = source.getSize();
    this->store.clear();
    unsigned int i = 0;
    while (i < this->lenght)
    {
        this->store.push_back(source.getStore()[i]);
        i++;
    }
    return (*this);
};

Span::~Span() {};

std::vector<int> Span::getStore(void) const
{
    return this->store;
};

unsigned int Span::getSize(void) const
{
    return this->lenght;
};

void Span::addNumber(int num)
{
    if (this->store.size() == this->lenght)
        throw FullStoreException();
    this->store.push_back(num);
    std::cout << "Now store = {";
    int i = -1;
    int size = this->store.size() - 1;
    while (++i < size)
        std::cout << this->store[i] << ", ";
    std::cout << this->store[i] << "}\n";
};

void Span::addNumberRange(int num, int begin, int end)
{
    if (begin < 0 || end < 0 || end < begin)
        throw RangeOutException();
    if(static_cast<unsigned int>(end) > this->lenght || static_cast<unsigned int>(begin) > this->store.size()) 
        throw RangeOutException();
    if (static_cast<unsigned int>(begin) < this->store.size() && this->store.size() <= static_cast<unsigned int>(end))
        std::fill(this->store.begin() + begin, this->store.begin() + this->store.size(), num);
    else if (static_cast<unsigned int>(begin) < this->store.size() && static_cast<unsigned int>(end) < this->store.size())
        std::fill(this->store.begin() + begin, this->store.begin() + end, num);
    int i = this->store.size() - 1;
    while (++i < end)
        this->store.push_back(num);
    
    std::cout << "Now store = {";
    i = -1;
    int size = this->store.size() - 1;
    while (++i < size)
        std::cout << this->store[i] << ", ";
    std::cout << this->store[i] << "}\n";
};

int Span::shortestSpan(void) const 
{
    if (this->store.size() < 2)
        throw NoSpanException();
    std::vector<int> dif(this->store);
    std::sort(dif.begin(), dif.end());
    std::adjacent_difference(dif.begin(), dif.end(), dif.begin());
    dif.erase(dif.begin());
    std::sort(dif.begin(), dif.end());
    return dif[0];
};

int Span::longestSpan(void) const
{
    std::vector<int> vect = this->store;
    if (this->store.size() < 2)
        throw NoSpanException();
    std::sort(vect.begin(), vect.end());
    return (*(vect.end() - 1) - *vect.begin());
};