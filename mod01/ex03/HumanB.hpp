#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();
		void				attack(void);
		void				setName(std::string name);
		const std::string&	getName(void);
		void				setWeapon(Weapon& weapon);

	private:
		std::string	name;
		Weapon*		weapon;
};
#endif
