#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    public:
        Fixed();
        Fixed(const int value);
        Fixed(const float value);
        Fixed(const Fixed& copy);
        ~Fixed();
        Fixed& operator= (const Fixed& fixed);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;

    private:
        int value;
        static const int fractional = 8;
};

std::ostream& operator<<(std::ostream &out, const Fixed& fixed);

#endif