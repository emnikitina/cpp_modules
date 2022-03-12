#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor called\n";
    ClapTrap::name = "noname";
    ClapTrap::hitpoints = 100;
    ClapTrap::energyPoints = 50;
    ClapTrap::attackDamage = 20;
};

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap constructor called\n";
    ClapTrap::name = name;
    ClapTrap::hitpoints = 100;
    ClapTrap::energyPoints = 50;
    ClapTrap::attackDamage = 20;
};

ScavTrap::ScavTrap(const ScavTrap& copy)
{
    std::cout << "ScavTrap copy constructor called\n";
    this->name = copy.name;
    this->hitpoints = copy.hitpoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
};

ScavTrap& ScavTrap::operator=(const ScavTrap& scavtrap) 
{
    std::cout << "ScavTrap overloaded operator called\n";
    this->name = scavtrap.name;
    this->hitpoints = scavtrap.hitpoints;
    this->energyPoints = scavtrap.energyPoints;
    this->attackDamage = scavtrap.attackDamage;
    return (*this);

};

ScavTrap::~ScavTrap() 
{
    std::cout << "ScavTrap destructor called\n";
};

void ScavTrap::guardGate() 
{
    std:: cout << "ScavTrap " << this->name << " have enterred in Gate keeper mode.\n";
};

void	ScavTrap::attack(std::string const& target) 
{
    if (this->energyPoints <= 0)
        std::cout << "Not enough energy to attack smbd\n";
    else
    {
        std::cout << "ScavTrap " << this->name << " attack " << target << ", causing " << this->attackDamage << " points of damage!\n";
        this->energyPoints--;
    }
};