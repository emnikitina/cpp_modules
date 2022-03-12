#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap diamond("jewel");
    DiamondTrap other_diamond;

    other_diamond.setName("Mark");
    other_diamond.whoAmI();
    diamond.attack("Michael");
    diamond.highFivesGuys();
    diamond.guardGate();
    diamond.whoAmI();
    return (0);
}