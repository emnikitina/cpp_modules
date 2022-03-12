#include "Zombie.hpp"

Zombie::Zombie(void) {};

Zombie::Zombie(std::string name)
{
	this->name = name;
};

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->name << " is died" << std:: endl;
};

void	Zombie::announce(void)
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
};

void	Zombie::setName(std::string name)
{
	this->name = name;
};

std::string Zombie::getName(void)
{
	return (this->name);
};