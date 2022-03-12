#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called\n";
    this->type = "dog";
};

Dog::Dog(const Dog& copy)
{
    this->type = copy.type;
};

Dog& Dog::operator= (const Dog& dog)
{
    this->type = dog.type;
    return (*this);
};

Dog::~Dog()
{
    std::cout << "Dog destructor called\n";
};

void Dog::makeSound(void) const
{
    std::cout << "Woof\n";
}