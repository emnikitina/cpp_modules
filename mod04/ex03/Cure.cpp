#include "Cure.hpp"

Cure::Cure()
{
    //std::cout << "Cure Materia class default constructor called\n";
    AMateria::type = "cure";
};

Cure::Cure(const Cure& copy)
{
    this->type = copy.type;
};

Cure& Cure::operator=(const Cure& source)
{
    if (this == &source)
        return (*this);
    this->type = source.type;
    return (*this);
};

Cure* Cure::clone() const
{
    Cure *tmp;

    tmp = new Cure();
    return (tmp);
};

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *\n";
};

Cure::~Cure()
{
    //std::cout << "Cure Materia class default destructor called\n";
};