#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float vm1 = (a.getXValue().toFloat() - point.getXValue().toFloat()) * (b.getYValue().toFloat() - a.getYValue().toFloat()) - (b.getXValue().toFloat() - a.getXValue().toFloat()) * (a.getYValue().toFloat() - point.getYValue().toFloat());
    float vm2 = (b.getXValue().toFloat() - point.getXValue().toFloat()) * (c.getYValue().toFloat() - b.getYValue().toFloat()) - (c.getXValue().toFloat() - b.getXValue().toFloat()) * (b.getYValue().toFloat() - point.getYValue().toFloat());
    float vm3 = (c.getXValue().toFloat() - point.getXValue().toFloat()) * (a.getYValue().toFloat() - c.getYValue().toFloat()) - (a.getXValue().toFloat() - c.getXValue().toFloat()) * (c.getYValue().toFloat() - point.getYValue().toFloat());
 
    if ((vm1 >= 0.0 && vm2 >= 0.0 && vm3 >= 0.0) || (vm1 <= 0.0 && vm2 <= 0.0 && vm3 <= 0.0))
        return (true);
    else
        return (false);
};

int main()
{
    Point a(1, 6);
    Point b(4, 6);
    Point c(4, 1);
    Point p1(3, 5);
    Point p2(1, 1);

    std::cout << "Triangle " << "(" << a.getXValue() << ";" << a.getYValue() << ") " << "(" << b.getXValue() << ";" << b.getYValue() << ") " << "(" << c.getXValue() << ";" << c.getYValue() << ") \n";
    std::cout << "Point " << "(" << p1.getXValue() << ";" << p1.getYValue() << ") ";
    if (bsp(a, b, c, p1))
        std::cout << "inside of a triangle\n";
    else
        std::cout << "NOT inside of a triangle\n";
    std::cout << "Point " << "(" << p2.getXValue() << ";" << p2.getYValue() << ") ";
    if (bsp(a, b, c, p2))
        std::cout << "inside of a triangle\n";
    else
        std::cout << "NOT inside of a triangle\n";
    return (0);
}