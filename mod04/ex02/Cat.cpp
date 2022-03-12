#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called\n";
    this->type = "cat";
    this->brain = new Brain();
};

Cat::Cat(const Cat& copy)
{
    this->type = copy.type;
    this->brain = new Brain(*copy.brain);
};

Cat& Cat::operator= (const Cat& source)
{
    if (this == &source)
        return (*this);
    
    this->type = source.type;

    delete this->brain;
    this->brain = new Brain(*source.brain);

    return (*this);
};

Cat::~Cat()
{
    std::cout << "Cat destructor called\n";
    delete this->brain;
};

void Cat::makeSound(void) const
{
    std::cout << "Meooow\n";
}