#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {};

HumanA::~HumanA(void) {};

void	HumanA::setName(std::string name)
{
	this->name = name;
};

const std::string&	HumanA::getName(void)
{
	std::string& ref = this->name;
	return (ref);
};

void	HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
};
