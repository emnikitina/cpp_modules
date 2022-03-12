#include "MutantStack.hpp"
#include "MutantStack.cpp"
#include <list>

int main()
{
    MutantStack<int> mstack;
	std::list<int> mylist;

    mstack.push(5);
    mstack.push(17);
	mylist.push_back(5);
	mylist.push_back(17);
    std::cout << "mstack last added: " << mstack.top() << std::endl;
	std::cout << "mylist lsat added: " << mylist.back() << std::endl;
	
    mstack.pop();
	mylist.pop_back();
    std::cout << "mstack size=" << mstack.size() << std::endl;
	std::cout << "vector size=" << mylist.size() << std::endl;


    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(-1);

	mylist.push_back(3);
	mylist.push_back(5);
	mylist.push_back(737);
	mylist.push_back(-1);


    MutantStack<int>::iterator itms = mstack.begin();
    MutantStack<int>::iterator items = mstack.end();
	std::list<int>::iterator itl = mylist.begin();
    std::list<int>::iterator itel = mylist.end();

	++itms;
    --itms;
	++itl;
    --itl;

	std::cout << "mutant stack:\n";
    while (itms != items)
    {
		std::cout << *itms << std::endl;
		++itms;
    }
	std::cout << "list:\n";
	while (itl != itel)
    {
		std::cout << *itl << std::endl;
		++itl;
    }

    std::stack<int> s(mstack);
	MutantStack<int> copyconst(mstack);
	MutantStack<int> copy = mstack;

	std::cout << "mstack: " << s.top() << std::endl;
	std::cout << "copy constructor: " << copyconst.top() << std::endl;
	std::cout << "assignation operator: " << copy.top() << std::endl;

    return 0;
}