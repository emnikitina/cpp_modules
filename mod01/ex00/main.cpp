#include "Zombie.hpp"

int main()
{
	Zombie zomb_one = Zombie();
	Zombie* zomb_two;

	zomb_two = newZombie("Michael");
	zomb_one.setName("Peter");
	zomb_one.announce();
	randomChump("Alex");
	zomb_two->announce();
	delete zomb_two;
	return (0);
}
