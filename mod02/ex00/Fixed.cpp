#include "Fixed.hpp"

Fixed::Fixed() 
{
    std::cout << "Default contructor called\n";
    this->value = 0;
};

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy contructor called\n";
    this->value = copy.getRawBits();
};

Fixed& Fixed::operator= (const Fixed& fixed)
{
    std::cout << "Assignataion operator called\n";
    this->value = fixed.getRawBits();
    return (*this);
};

Fixed::~Fixed() 
{
    std::cout << "Destructor called\n";
};

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member fuction called\n";
    return (this->value);
};

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member fuction called\n";
    this->value = raw;
};