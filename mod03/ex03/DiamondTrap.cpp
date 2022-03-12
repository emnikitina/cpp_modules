#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap default constructor called\n";
    ClapTrap::name = "noname_clap_name";
    this->name = "noname";
    this->hitpoints = FragTrap::hitpoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
};

DiamondTrap::DiamondTrap(std::string name)
{
    std::cout << "DiamondTrap other constructor called\n";
    ClapTrap::name = name + "_clap_name";
    this->name = name;
    this->hitpoints = FragTrap::hitpoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
};

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
    std::cout << "DiamondTrap copy constructor called\n";
    this->name = copy.name;
    this->hitpoints = copy.hitpoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
};

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& diamondtrap) 
{
    std::cout << "DiamondTrap overloaded operator called\n";
    this->name = diamondtrap.name;
    this->hitpoints = diamondtrap.hitpoints;
    this->energyPoints = diamondtrap.energyPoints;
    this->attackDamage = diamondtrap.attackDamage;
    return (*this);

};

DiamondTrap::~DiamondTrap() 
{
    std::cout << "DiamondTrap destructor called\n";
};

void DiamondTrap::whoAmI()
{
    std::cout << "my name " << this->name << std::endl;
    std::cout << "name of my great parent " << ClapTrap::name << std::endl;
};