#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat Andrew("Andrew", 75);
    Bureaucrat Michael("Michael", 2);

    ShrubberyCreationForm shrubbery("target");
    RobotomyRequestForm robotomy("target2");
    PresidentialPardonForm presidential("target3");


    //try to execute form without signing
    std::cout << "--- try to execute form without signing ---\n";
    try
    {
        shrubbery.execute(Andrew);
                
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    //try to sign all forms
    std::cout << "--- try to sign Shrumbbery Form ---\n";
    try
    {
        Michael.signForm(shrubbery);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    std::cout << "--- try to sign Robotomy Form ---\n";
    try
    {
        Michael.signForm(robotomy);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    std::cout << "--- try to sign Presidential Form ---\n";
    try
    {
        Michael.signForm(presidential);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    //try to execute shrubbery form
    std::cout << "--- try to execute Shrubbery Form ---\n";
    try
    {
        shrubbery.execute(Andrew);
        std::cout << "success\n";        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    //try to execute robotomy form
    std::cout << "--- try to execute Robotomy Form--- \n";
    try
    {
        robotomy.execute(Andrew);
        std::cout << "success\n";           
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    //try to execute robotomy form
    std::cout << "--- try to execute Robotomy Form ---\n";
    try
    {
        robotomy.execute(Michael);
        std::cout << "success\n";      
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    //try to execute Presidential form
    std::cout << "--- try to execute Presidential Form ---\n";
    try
    {
        presidential.execute(Andrew);
        std::cout << "success\n";          
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    //try to execute Presidential form
    std::cout << "--- try to execute Presidential Form ---\n";
    try
    {
        presidential.execute(Michael);
        std::cout << "success\n";         
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}