#include "Ice.hpp"

Ice::Ice()
{
    //std::cout << "Ice Materia class default constructor called\n";
    AMateria::type = "ice";
};

Ice::Ice(const Ice& copy)
{
    this->type = copy.type;
};

Ice& Ice::operator=(const Ice& source)
{
    if (this == &source)
        return (*this);
    this->type = source.type;
    return (*this);
};

Ice* Ice::clone() const
{
    Ice *tmp;
    
    tmp = new Ice();
    return (tmp);
};

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << "*\n";
};

Ice::~Ice()
{
    //std::cout << "Ice Materia class default destructor called\n";
};