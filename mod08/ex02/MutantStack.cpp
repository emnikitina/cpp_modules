#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(): std::stack<T>() {};

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& copy): std::stack<T>(copy) {};

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& source)
{
    if (this == &source)
        return (*this);
    
    this->c = source._Get_container();
    return (*this);
};

template <typename T>
MutantStack<T>::~MutantStack() {};

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() 
{
    return this->c.begin();
};

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() 
{
    return this->c.end();
};