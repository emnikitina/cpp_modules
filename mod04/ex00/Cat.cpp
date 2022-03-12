#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called\n";
    this->type = "cat";
};

Cat::Cat(const Cat& copy)
{
    this->type = copy.type;
};

Cat& Cat::operator= (const Cat& cat)
{
    this->type = cat.type;
    return (*this);
};

Cat::~Cat()
{
    std::cout << "Cat destructor called\n";
};

void Cat::makeSound(void) const
{
    std::cout << "Meooow\n";
}