#include "Point.hpp"

Point::Point ()
{
    this->x = 0;
    this->y = 0;
};
Point::Point (const Point& copy) 
{
    this->x = copy.x;
    this->y = copy.y;
};

Point::Point (const float x, const float y) 
{
    this->x = x;
    this->y = y;
};

Point::~Point() {};

Point& Point::operator= (const Point& point)
{
    this->x = point.x;
    this->y = point.y;
    return (*this);
};

Fixed Point::getXValue( void ) const
{
    return (this->x);
};

void Point::setXValue( int const x )
{
    this->x = x;
};

Fixed Point::getYValue( void ) const 
{
   return (this->y);
};

void Point::setYValue( int const y )
{
    this->y = y;
};