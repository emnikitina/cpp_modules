#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main()
{
    ClapTrap clap("Clapik");
    ScavTrap scav("Scavik");
    FragTrap frag("Fragik");

    clap.attack("Andrew");
    clap.takeDamage(3);
    clap.beRepaid(5);
    
    scav.attack("Denis");
    scav.takeDamage(10);
    scav.beRepaid(20);
    scav.guardGate();

    frag.attack("Michaele");
    frag.takeDamage(30);
    frag.beRepaid(15);
    frag.highFivesGuys();
    
    return 0;
}