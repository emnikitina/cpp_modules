#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int i = -1;
	Zombie* zombies = new Zombie[N];
	
	while (++i < N)
		zombies[i].setName(name);
	return (&zombies[0]);
}
