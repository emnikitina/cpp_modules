#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

class Span
{
    private:
        unsigned int lenght;
        std::vector<int> store;

    public:
        Span(unsigned int n = 0);
        Span(const Span& copy);
        Span& operator=(const Span& source);
        ~Span();

        std::vector<int> getStore(void) const;
        unsigned int getSize(void) const;

        void addNumber(int num);
        void addNumberRange(int num, int begin, int end);
        int shortestSpan(void) const;
        int longestSpan(void) const;
};

class FullStoreException: public std::exception
{
    public:
        const char* what() const throw();
};

class RangeOutException: public std::exception
{
    public:
        const char* what() const throw();
};

class NoSpanException: public std::exception
{
    public:
        const char* what() const throw();
};

#endif