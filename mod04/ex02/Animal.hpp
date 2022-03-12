#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;

    public:
        Animal();
		Animal(const Animal& copy);
		Animal& operator= (const Animal& animal);
		virtual ~Animal();

        void setType(std::string &type);
        std::string getType(void) const;
        virtual void makeSound() const = 0;
};

#endif