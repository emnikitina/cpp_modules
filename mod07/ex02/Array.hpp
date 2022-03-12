#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

class IndexOutRangeException : public std::exception
{
    public:
        const char* what() const throw();
};


template <typename T>
class Array
{
    private:
        T* data;
        unsigned int dataSize;

    public:
        Array(unsigned int n = 0): dataSize(n)
        {
            this->data = NULL;
            if (n)
                this->data = new T[n];
        };

        Array(const Array& copy)
        {
            this->dataSize = copy.size();
            this->data = new T[this->dataSize];
            unsigned int i = 0;
            while (i < this->dataSize)
            {
                this->data[i] = copy[i];
                i++;
            }
        };

        Array& operator=(const Array& source)
        {
            if (this == &source)
                return (*this);

            this->dataSize = source.size();
            delete[] this->data;
            this->data = new T[this->dataSize];
            unsigned int i = 0;
            while (i < this->dataSize)
            {
                this->data[i] = source[i];
                i++;
            }
            return (*this);
        };

        T& operator[](int index) const
        {
            if (index < 0 || static_cast<unsigned int>(index) >= this->dataSize)
                throw IndexOutRangeException();
            return this->data[index];
        };

        unsigned int size(void) const
        {
            return this->dataSize;
        };

        ~Array()
        {
            if (this->data)
                delete[] this->data;
        };

};

#endif