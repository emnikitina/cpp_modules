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
    return (this->value);
};

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member fuction called\n";
    this->value = raw;
};

Fixed::Fixed(const int value) 
{
    std::cout << "Int constructor called\n";
    this->value = value << this->fractional;
};

Fixed::Fixed(const float value) 
{
    std::cout << "Float constructor called\n";
    this->value = roundf(value * (1 << this->fractional));
};

float Fixed::toFloat( void ) const 
{
    return ((float)this->value / (1 << this->fractional));
};

int Fixed::toInt( void ) const 
{
    return (this->value >> this->fractional);
};

std::ostream& operator<<(std::ostream &out, const Fixed& fixed) 
{
    out << fixed.toFloat();
    return (out);
};