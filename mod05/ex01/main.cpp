#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    //try to right form
    std::cout << "try to create right form\n";
    try
    {
        Form form("form", 50, 25);
        std::cout << "Form was created\n";        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "--------------\n";

    //try to create form with wrong grade
    std::cout << "try to create form with wrong grade to sign 170\n";
    try
    {
        Form form("form", 170, 150);        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "--------------\n";

    //try to create form with wrong grade
    std::cout << "try to create form with wrong grade to execute -150\n";
    try
    {
        Form form("form", 150, -150);        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "--------------\n";

    Form form1("form1", 50, 25);
    Form form2("form2", 1, 1);
    Form form3("form3", 150, 150);
    Bureaucrat Andrew("Andrew", 75);

    std::cout << std::endl << form1 << std::endl;
    std::cout << form2 << std::endl;
    std::cout << form3 << std::endl;
    std::cout << Andrew << std::endl << std::endl;

    //try to sign form
    std::cout << "Try to sign form\n";
    try
    {
        form1.beSigned(Andrew);
        std::cout << "Success\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "--------------\n";

    //try to sign signed form
    std::cout << "Try to sign signed form\n";
    Andrew.signForm(form1);
    std::cout << "--------------\n";

    //try to create bureaucrat with wrong grade
    std::cout << "Try to create bureaucrat with wrong grade\n";
    try
    {
        form2.beSigned(Andrew);
        std::cout << "Success\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "--------------\n";

    //try to create bureaucrat with wrong grade
    std::cout << "Try to create bureaucrat with wrong grade\n";
    try
    {
        form3.beSigned(Andrew);
        std::cout << "Success\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "--------------\n";
    
    return 0;
}