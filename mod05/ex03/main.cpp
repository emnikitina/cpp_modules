#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
    Form* rrf;

    Bureaucrat Andrew("Andrew", 1);
    std::cout << Andrew << std::endl;
    std::cout << std::endl;
    
    std::cout << "----------Try to create robotomy request form----------\n";  
    try
    {
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        std::cout << "success\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "----------Try to sign robotomy request form----------\n";
    try
    {
        rrf->beSigned(Andrew);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "----------Try to execute robotomy request form----------\n";
    try
    {
        rrf->execute(Andrew);
        delete rrf;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    std::cout << "----------Try to create shrubbery creation form----------\n";
    try
    {
        rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
        std::cout << "success\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "----------Try to sign shrubbery creation form----------\n";
    try
    {
        rrf->beSigned(Andrew);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "----------Try to execute shrubbery creation form----------\n";
    try
    {
        rrf->execute(Andrew);
        delete rrf;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    std::cout << "----------Try to create presidential pardon form----------\n";
    try
    {
        rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
        std::cout << "success\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "----------Try to sign presidential pardon form----------\n";
    try
    {
        rrf->beSigned(Andrew);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "----------Try to execute presidential pardon form----------\n";
    try
    {
        rrf->execute(Andrew);
        delete rrf;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    
    std::cout << "----------Try to create unknown form----------\n";
    try
    {
        rrf = someRandomIntern.makeForm("trash", "Bender");
        std::cout << "success\n";
        delete rrf;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    return 0;
}