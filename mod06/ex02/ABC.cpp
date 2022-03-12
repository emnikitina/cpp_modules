#include "Base.hpp"
#include "ABC.hpp"

Base::~Base() {};

Base* generate(void)
{
    Base* tmp;
    Base* baseClasses[3] = {new A(), new B(), new C()};
    int i;
    int j = -1;

    i = rand() % 3;
    tmp = baseClasses[i];
    while (++j < 3)
    {
        if (j != i)
            delete baseClasses[j];
    }
    return (tmp);
};

void identify(Base* p)
{
    //std::cout << "Pointer\n";
    if (dynamic_cast<A*>(p))
        std::cout << "A\n";
    else if (dynamic_cast<B*>(p))
        std::cout << "B\n";
    else if (dynamic_cast<C*>(p))
        std::cout << "C\n";
    else
        std::cout << "Unknown Class\n";
};

void identify(Base& p)
{
    //std::cout << "Reference\n";
    try
    {
        A tmpa;
        tmpa = dynamic_cast<A&>(p);
        std::cout << "A\n";
    }
    catch(const std::exception& e)
    {
        try
        {
            B tmpb;
            tmpb = dynamic_cast<B&>(p);
            std::cout << "B\n";
        }
        catch(const std::exception& e)
        {
            try
            {
                C tmpc;
                tmpc = dynamic_cast<C&>(p);
                std::cout << "C\n";
            }
            catch(const std::exception& e)
            {
                std::cout << "Unknown Class\n";
            }   
        }
    }
};