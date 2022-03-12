#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    int n = 2;
    Animal* animals[n];
    //Animal little_pony;
    int i = -1;

    std::cout << "--------------------\n";
    while (++i < n)
    {
        if (i % 2)
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
        std::cout << animals[i]->getType() << std::endl;
    }
    std::cout << "--------------------\n";
    i = -1;
    while (++i < n)
        delete animals[i];
    return (0);
}