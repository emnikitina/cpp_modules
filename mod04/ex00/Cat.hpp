#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
		Cat(const Cat& copy);
		Cat& operator= (const Cat& cat);
		~Cat();

        void makeSound(void) const;
};

#endif