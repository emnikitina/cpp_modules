#include "HumanB.hpp"

HumanB::HumanB(void) {};

HumanB::HumanB(std::string name) 
{
	this->name = name;
};

HumanB::~HumanB(void) {};

void	HumanB::setName(std::string name)
{
	this->name = name;
};

const std::string&	HumanB::getName(void)
{
	return (this->name);
};

void	HumanB::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
};

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
};
