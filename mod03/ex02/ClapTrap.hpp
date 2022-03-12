#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
    	std::string name;
    	int			hitpoints;
    	int			energyPoints;
		int			attackDamage;

    public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& copy);
		ClapTrap& operator= (const ClapTrap& claptrap);
		~ClapTrap();

		void setName(std::string name);
		void setHitpoints(int hitpoints);
		void setEnergyPoints(int energyPoints);
		void setAttackDamage(int attackDamage);

		std::string getName(void);
		int			getHitpoints(void);
		int			getEnergyDamage(void);
		int			getAttackDamage(void);
		
		void	attack(std::string const& target);
		void	takeDamage(unsigned int amount);
		void	beRepaid(unsigned int amount);

};

#endif