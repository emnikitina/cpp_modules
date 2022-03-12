#include "ClapTrap.hpp"

int main()
{
    ClapTrap one;
    ClapTrap two("Michael");
    ClapTrap three = two;
    ClapTrap four(two);
    int i = -1;

    one.setName("Oleg");
    one.attack("Andrew");
    one.takeDamage(3);

    two.beRepaid(2);
    while (++i < 12)
    {
        std::cout << i + 1 << " ";
        three.attack("Andrew");
    }

    return (0);
}