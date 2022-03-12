#include "easyfind.hpp"
#include <vector>
#include <set>

int main()
{
    std::multiset<int> mySet;
    mySet.insert(5);
    mySet.insert(7);
    mySet.insert(10);
    mySet.insert(4);
    mySet.insert(0);
    std::cout << "-----Try to find existing item in array------\n";
    try
    {
        std::cout << "finded num=" << *easyfind(mySet, 10) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "---Try to find non existing item in array----\n";
    try
    {
        easyfind(mySet, 1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::vector<int> vect;
    for (int count=0; count < 5; ++count)
        vect.push_back(10 + count);
    std::cout << "-----Try to find existing item in vector-----\n";
    try
    {
        std::cout << "finded num=" << *easyfind(vect, 12) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "---Try to find non existing item in vector---\n";
    try
    {
        easyfind(vect, 1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}