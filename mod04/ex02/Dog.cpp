#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called\n";
    this->type = "dog";
    this->brain = new Brain();
};

Dog::Dog(const Dog& copy)
{
    this->type = copy.type;
    this->brain = new Brain();
};

Dog& Dog::operator= (const Dog& source)
{
    if (this == &source)
        return (*this);
    
    this->type = source.type;

    delete this->brain;
    this->brain = new Brain(*source.brain);

    return (*this);
};

Dog::~Dog()
{
    std::cout << "Dog destructor called\n";
    delete this->brain;
};

void Dog::makeSound(void) const
{
    std::cout << "Woof\n";
}