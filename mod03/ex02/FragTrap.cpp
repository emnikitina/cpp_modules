#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap defult constructor called\n";
    ClapTrap::name = "noname";
    ClapTrap::hitpoints = 100;
    ClapTrap::energyPoints = 100;
    ClapTrap::attackDamage = 30;
};

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap other constructor called\n";
    ClapTrap::name = name;
    ClapTrap::hitpoints = 100;
    ClapTrap::energyPoints = 100;
    ClapTrap::attackDamage = 30;
};

FragTrap::FragTrap(const FragTrap& copy)
{
    std::cout << "FragTrap copy constructor called\n";
    this->name = copy.name;
    this->hitpoints = copy.hitpoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
};

FragTrap& FragTrap::operator= (const FragTrap& fragtrap) 
{
    std::cout << "Frag overloaded operator called\n";
    this->name = fragtrap.name;
    this->hitpoints = fragtrap.hitpoints;
    this->energyPoints = fragtrap.energyPoints;
    this->attackDamage = fragtrap.attackDamage;
    return (*this);

};

FragTrap::~FragTrap() 
{
    std::cout << "FragTrap destructor called\n";
};

void FragTrap::highFivesGuys(void)
{
    std::cout << "High fives?\n";
};