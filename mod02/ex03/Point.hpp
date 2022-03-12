#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point
{
    private:
        Fixed x;
        Fixed y;
    
    public:
        Point ();
        Point (const Point& copy);
        Point (const float x, const float y);
        ~Point();
        Point& operator= (const Point& point);

        Fixed getXValue( void ) const;
        void setXValue( int const x );
        Fixed getYValue( void ) const;
        void setYValue( int const y );

        bool bsp(Point const a, Point const b, Point const c, Point const point);
};

#endif