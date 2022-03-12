#ifndef WRONGANIMALS_HPP
# define WRONGANIMALS_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;

    public:
        WrongAnimal();
		WrongAnimal(const WrongAnimal& copy);
		WrongAnimal& operator= (const WrongAnimal& animal);
		virtual ~WrongAnimal();

        void setType(std::string &type);
        std::string getType(void) const;
        void makeSound() const;
};

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
		WrongCat(const WrongCat& copy);
		WrongCat& operator= (const WrongCat& cat);
		~WrongCat();

        void makeSound(void) const;

};

#endif