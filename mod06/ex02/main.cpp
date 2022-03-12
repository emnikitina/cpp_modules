#include "Base.hpp"
#include "ABC.hpp"
#include <time.h>

class D: public Base {};

int main()
{
    srand(time(0));
    
    std::cout << "-----Identify pointer-----\n";
    Base* ptr;
    ptr = generate();
    identify(ptr);

    std::cout << "-----Identify reference-----\n";
    Base& ref = *generate();
    identify(ref);

    std::cout << "-----Identify pointer unknown class-----\n";
    Base* ptr_tmp;
    ptr_tmp = new D();
    identify(ptr_tmp);
    delete ptr_tmp;

    std::cout << "-----Identify reference unknown class-----\n";
    Base& tmp = *(new D());
    identify(tmp);
    delete &tmp;

    return 0;
}