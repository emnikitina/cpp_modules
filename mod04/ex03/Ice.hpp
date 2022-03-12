#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Ice: public AMateria
{
    public:
        Ice();
        Ice(const Ice& copy);
        Ice& operator=(const Ice& source);
        ~Ice();

        Ice* clone() const;
        void use(ICharacter& target);
};

#endif