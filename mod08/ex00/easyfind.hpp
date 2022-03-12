#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <iostream>
#include <algorithm>

class NotFoundException : public std::exception
{
    public:
        const char* what() const throw()
        {
            return "Exception:: Element Is Not Found";
        };
};

template <typename T>
typename T::iterator easyfind(T& smth, int num)
{
    typename T::iterator it = std::find(smth.begin(), smth.end(), num);
    if (it == smth.end())
        throw NotFoundException();
    return (it);
};

#endif