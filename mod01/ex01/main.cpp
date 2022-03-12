#include "Zombie.hpp"

int main()
{
	int i = -1;
	int N = 7;
	Zombie* zombies;
	
	zombies = zombieHorde(N, "Mark");
	while (++i < N)
		zombies[i].announce();
	delete [] zombies;
	return (0);
}
