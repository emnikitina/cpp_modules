#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("noname"), hitpoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap default constructor called\n";
};

ClapTrap::ClapTrap(std::string name) : name(name), hitpoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap constructor called\n";
};

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "ClapTrap copy constructor called\n";
    this->name = copy.name;
    this->hitpoints = copy.hitpoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
};

ClapTrap& ClapTrap::operator= (const ClapTrap& claptrap)
{
    std::cout << "ClapTrap overloaded operator called\n";
    this->name = claptrap.name;
    this->hitpoints = claptrap.hitpoints;
    this->energyPoints = claptrap.energyPoints;
    this->attackDamage = claptrap.attackDamage;
    return (*this);
};

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called\n";
};

void ClapTrap::setName(std::string name)
{
    this->name = name;
};

void ClapTrap::setHitpoints(int hitpoints)
{
    this->hitpoints = hitpoints;
};

void ClapTrap::setEnergyPoints(int energyPoints)
{
    this->energyPoints = energyPoints;
};

void ClapTrap::setAttackDamage(int attackDamage)
{
    this->attackDamage = attackDamage;
};

std::string ClapTrap::getName(void)
{
    return (this->name);
};

int			ClapTrap::getHitpoints(void)
{
    return (this->hitpoints);
};

int			ClapTrap::getEnergyDamage(void)
{
    return (this->energyPoints);
};

int			ClapTrap::getAttackDamage(void)
{
    return (this->attackDamage);
};

void	ClapTrap::attack(std::string const& target) 
{
    if (this->energyPoints <= 0)
        std::cout << "Not enough energy to attack smbd\n";
    else
    {
        std::cout << "ClapTrap " << this->name << " attack " << target << ", causing " << this->attackDamage << " points of damage!\n";
        this->energyPoints--;
    }
};

void	ClapTrap::takeDamage(unsigned int amount) 
{
    if (this->hitpoints <= 0)
        std::cout << "ClapTrap " << name << " is already died\n";
    else
    {
        std::cout << "ClapTrap " << this->name << " takes " << amount << " damaged, because was attacked\n";
        this->hitpoints -= amount;
        if (this->hitpoints < 0)
        {
            this->hitpoints = 0;
			std::cout << "Oh, ClapTrap " << this->name << " died! I'm so sorry\n";
    	}
        else
			std::cout << "Hp of ClapTrap " << this->name << " is " << this->hitpoints << std::endl;
    }

};

void	ClapTrap::beRepaid(unsigned int amount)
{
    if (this->hitpoints <= 0)
		std::cout << "ClapTrap " << this->name << " is already died\n";
	else
	{
		std::cout << "ClapTrap " << this->name << " was repaid by " << amount <<  " points\n";
    	this->hitpoints += amount;
		std::cout << "Now ClapTrap " << this->name << " has " << this->hitpoints << " hp\n";
	}
};