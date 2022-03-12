#include "Brain.hpp"

Brain::Brain() 
{
    int i = -1;

    std::cout << "Brain default constructor called\n";
    while (++i < 100)
        this->ideas[i] = "a crazy idea";
};

Brain::Brain(const Brain& copy)
{
    int i = -1;

    while (++i < 100)
        this->ideas[i] = copy.ideas[i];

};

Brain& Brain::operator= (const Brain& source)
{
    int i = -1;

    if (this == &source)
        return *this;
    while (++i < 100)
        this->ideas[i] = source.ideas[i];
    return *this;
};

Brain::~Brain()
{
    std::cout << "Brain destructor called\n";
};

std::string Brain::getIdeas(void) const
{
    return (this->ideas[0]);
};