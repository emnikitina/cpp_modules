#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
    public:
        typedef typename std::deque<T>::iterator iterator;

        MutantStack();
        MutantStack(const MutantStack<T>& copy);
        MutantStack<T>& operator=(const MutantStack<T>& source);
        ~MutantStack();

        iterator begin();
        iterator end();
};

#endif