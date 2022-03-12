#include "Fixed.hpp"

Fixed::Fixed() 
{
    this->value = 0;
};

Fixed::Fixed(const Fixed& copy)
{
    this->value = copy.getRawBits();
};

Fixed& Fixed::operator= (const Fixed& fixed)
{
    this->value = fixed.getRawBits();
    return (*this);
};

Fixed::~Fixed() {};

int Fixed::getRawBits( void ) const
{
    return (this->value);
};

void Fixed::setRawBits( int const raw )
{
    this->value = raw;
};

Fixed::Fixed(const int value) 
{
    this->value = value << this->fractional;
};

Fixed::Fixed(const float value) 
{
    this->value = roundf(value * (1 << this->fractional));
};

float Fixed::toFloat( void ) const 
{
    return ((float)this->value / (float)(1 << this->fractional));
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

bool operator>(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() > b.getRawBits())
        return (true);
    return (false);
}

bool operator<(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() < b.getRawBits())
        return (true);
    return (false);
}

bool operator>=(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() >= b.getRawBits())
        return (true);
    return (false);
}

bool operator<=(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() <= b.getRawBits())
        return (true);
    return (false);
}

bool operator==(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() == b.getRawBits())
        return (true);
    return (false);
}

bool operator!=(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() != b.getRawBits())
        return (true);
    return (false);
}

Fixed Fixed::operator+(const Fixed& a)
{
    return (Fixed(this->value + a.getRawBits()));
}

Fixed Fixed::operator-(const Fixed& a)
{
    return(this->value - a.getRawBits());
}

Fixed Fixed::operator*(const Fixed& a)
{
    Fixed res;

    res.setRawBits(a.getRawBits() * this->value >> this->fractional);
    return (res);
}

Fixed Fixed::operator/(const Fixed& a)
{
    Fixed res;

    res.setRawBits(this->value / a.getRawBits());
    return (res);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp;

    tmp.setRawBits(this->value);
    this->value++;
    return (tmp);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp;

    tmp.setRawBits(this->value);
    this->value--;
    return (tmp);
}

Fixed& Fixed::operator++()
{
    this->value++;
    return (*this);
}

Fixed& Fixed::operator--()
{
    this->value--;
    return (*this);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a < b)
        return (a);
    return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a > b)
        return (a);
    return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a < b)
        return (a);
    return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a > b)
        return (a);
    return (b);
}