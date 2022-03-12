#include "Animal.hpp"

Animal::Animal() : type("animal")
{
    std::cout << "Animal default constructor called\n";
};

Animal::Animal(const Animal& copy)
{
    this->type = copy.type;
};

Animal& Animal::operator= (const Animal& animal)
{
    this->type = animal.type;
    return (*this);
};

Animal::~Animal()
{
    std::cout << "Animal destructor called\n";
};

 void Animal::setType(std::string &type)
 {
     this->type = type;
 };

std::string Animal::getType(void) const 
{
    return (this->type);
};

void Animal::makeSound() const
{
    std::cout << "I'm just animal, I can't make sound\n";
}