#include "Character.hpp"

Character::Character(std::string name) : name(name)
{
    //std::cout << "Character constructor called\n";
    int i = -1;
    while (++i < 4)
        this->inventory[i] = NULL;
};

Character::Character(const Character& copy) 
{
    this->name = copy.name;
    int i = -1;
    while (++i < 4)
        this->inventory[i] = copy.inventory[i];
};

Character& Character::operator= (const Character& source) 
{
    if (this == &source)
        return (*this);
    
    int i = -1;
    while (++i < 4)
        delete this->inventory[i];

    this->name = source.name;
    i = -1;
    while (++i < 4)
        this->inventory[i] = source.inventory[i];
    return (*this);
};

std::string const & Character::getName() const
{
    return (this->name);
};

void Character::equip(AMateria* m)
{
    int i = -1;

    while (++i < 4)
    {
        if (!this->inventory[i])
        {
            this->inventory[i] = m;
            break ;
        }
    }
};

void Character::unequip(int idx)
{
    this->inventory[idx] = NULL;
};

void Character::use(int idx, ICharacter& target)
{
    this->inventory[idx]->use(target);
};

Character::~Character() 
{
    //std::cout << "Character destructor called\n";
    int i = -1;
    while (++i < 4)
        delete this->inventory[i];
};