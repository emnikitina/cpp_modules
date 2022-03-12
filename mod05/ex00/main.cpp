#include "Bureaucrat.hpp"

int main()
{
    //try to create right bureaucrat
    std::cout << "try to create right bureaucrat\n";
    try
    {
        Bureaucrat bure("Michael", 1);
        std::cout << "Bureaucrat was created\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "--------------\n";

    //try to create bureaucrat with wrong grade
    std::cout << "try to create bureaucrat with wrong grade 170\n";
    try
    {
        Bureaucrat bure("Michael", 170);
        bure.upGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "--------------\n";

    std::cout << "try to create bureaucrat with wrong grade -5\n";
    try
    {
        Bureaucrat bure("Michael", -5);
        bure.upGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "--------------\n";


    //try to change grade
    std::cout << "try to change grade\n";
    Bureaucrat plankton("Kate", 15);
    std::cout << "To check << overloaded:" << plankton << std::endl;
    std::cout << "Now Kate's grate is " << plankton.getGrade() << std::endl;
    try
    {
        plankton.lowGrade();
        //plankton.upGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "--------------\n";

    //try to up the higest grade 
    std::cout << "try to up the higest grade\n";
    Bureaucrat plankton1("Mike", 1);
    try
    {
        plankton1.upGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "--------------\n";

    //try to low the lowest grade
    std::cout << "try to low the lowest grade\n";
    Bureaucrat plankton2("Olya", 150);
    try
    {
        plankton2.lowGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "--------------\n";
    return 0;
}