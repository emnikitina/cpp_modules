#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    int n = 10;
    Animal* animals[n];
    int i = -1;

    std::cout << "-------------------\n";
    while (++i < n)
    {
        if (i % 2)
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
        std::cout << animals[i]->getType() << std::endl;
    }
    std::cout << "-------------------\n";
    i = -1;
    while (++i < n)
        delete animals[i];

    std::cout << "-------------------\n";
    const Animal* j = new Dog();
    const Animal* k = new Cat();
    delete j;
    delete k;
    
    return (0);
}