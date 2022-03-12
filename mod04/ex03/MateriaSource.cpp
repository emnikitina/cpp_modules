#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
{
    //std::cout << "MateriaSource constructor called\n";
    int i = -1;
    while (++i < 4)
        this->source[i] = NULL;
};

MateriaSource::MateriaSource(const MateriaSource& copy)
{
    int i = -1;
    while (++i < 4)
        this->source[i] = copy.source[i];
};

MateriaSource& MateriaSource::operator=(const MateriaSource& source)
{
    if (this == &source)
        return (*this);
    
    int i = -1;
    while (++i < 4)
        this->source[i] = source.source[i];
    return(*this);
};

MateriaSource::~MateriaSource()
{
    //std::cout << "MateriaSource destructor called\n";
};

void MateriaSource::learnMateria(AMateria* m)
{
    int i = -1;
    while (++i < 4)
    {
        if (!this->source[i])
        {
            this->source[i] = m;
            break ;
        }
    }
};

AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i = -1;
    while (++i < 4)
    {
        if (this->source[i]->getType() == type)
            return ((*this->source[i]).clone());
    }
    return 0;
};