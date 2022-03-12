#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimals.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    const WrongAnimal* animal = new WrongAnimal();
    const WrongAnimal* cat = new WrongCat();
    const WrongCat* rightCat = new WrongCat();
    std::cout << cat->getType() << " " << std::endl;
    std::cout << rightCat->getType() << " " << std::endl;
    cat->makeSound();
    animal->makeSound();
    rightCat->makeSound();

    delete meta;
    delete j;
    delete i;
    delete animal;
    delete cat;
    delete rightCat;
    
    return (0);
}