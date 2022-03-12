#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void				attack(void);
		void				setName(std::string name);
		const std::string&	getName(void);

	private:
		std::string	name;
		Weapon		&weapon;
};
#endif
