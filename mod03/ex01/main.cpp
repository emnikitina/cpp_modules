#include "ScavTrap.hpp"

int main()
{
    ClapTrap clap("Clapik");
    ScavTrap scav("Scavik");

    std::cout << "clap hitpoints " << clap.getHitpoints() << std::endl;
    std::cout << "scav hitpoints " << scav.getHitpoints() << std::endl;

    clap.setName("Oleg");
    clap.attack("Andrew");
    clap.takeDamage(3);
    clap.beRepaid(5);
    
    scav.setName("Michael");
    scav.attack("Denis");
    scav.takeDamage(10);
    scav.beRepaid(20);
    scav.guardGate();
    
    return 0;
}