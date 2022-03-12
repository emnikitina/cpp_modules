#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure: public AMateria
{
    public:
        Cure();
        Cure(const Cure& copy);
        Cure& operator=(const Cure& source);
        ~Cure();

        Cure* clone() const;
        void use(ICharacter& target);
};

#endif