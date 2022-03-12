#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int value;
        static const int fractional = 8;
        
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

        static Fixed& max(Fixed& a, Fixed& b);
        static Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        Fixed operator++(int tmp);
        Fixed operator--(int tmp);
        Fixed& operator++();
        Fixed& operator--();
        Fixed operator+(const Fixed& a);
        Fixed operator-(const Fixed& a);
        Fixed operator*(const Fixed& a);
        Fixed operator/(const Fixed& a);
    
};

std::ostream& operator<<(std::ostream &out, const Fixed& fixed);

#endif