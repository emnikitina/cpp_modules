#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
    //std::cout << "AMateria constructor called\n";
    this->type = type;
};

AMateria::AMateria(const AMateria& copy)
{
    this->type = copy.type;
};

AMateria& AMateria::operator=(const AMateria& source)
{
    if (this == &source)
        return (*this);
    this->type = source.type;
    return (*this);
};

std::string const & AMateria::getType() const
{
    return (this->type);
};
        
void AMateria::use(ICharacter& target)
{
    std::cout << "Materia " << this->type << " was used by " << target.getName() << std::endl;
};

AMateria::~AMateria()
{
    //std::cout << "AMateria destructor called\n";
};