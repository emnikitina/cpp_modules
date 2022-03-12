#include "WrongAnimals.hpp"

WrongAnimal::WrongAnimal() : type("wronganimal")
{
    std::cout << "WrongAnimal default constructor called\n";
};

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
    this->type = copy.type;
};

WrongAnimal& WrongAnimal::operator= (const WrongAnimal& animal)
{
    this->type = animal.type;
    return (*this);
};

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called\n";
};

 void WrongAnimal::setType(std::string &type)
 {
     this->type = type;
 };

std::string WrongAnimal::getType(void) const 
{
    return (this->type);
};

void WrongAnimal::makeSound() const
{
    std::cout << "Wrong animal can't make sound\n";
}

WrongCat::WrongCat()
{
    std::cout << "WrongCat default constructor called\n";
    this->type = "Wrongcat";
};

WrongCat::WrongCat(const WrongCat& copy)
{
    this->type = copy.type;
};

WrongCat& WrongCat::operator= (const WrongCat& cat)
{
    this->type = cat.type;
    return (*this);
};

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called\n";
};

void WrongCat::makeSound(void) const
{
    std::cout << "WrongMeooow\n";
}