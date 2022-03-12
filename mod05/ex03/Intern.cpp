#include "Intern.hpp"

Intern::Intern() {};

Intern::Intern(const Intern & copy)
{
    (void)copy;
};

Intern& Intern::operator=(const Intern & source) 
{
    if (this == &source)
        return (*this);
    return (*this);
};

Intern::~Intern() {};

const char* Intern::UnknownFormException::what() const throw()
{
    return "Intern::Unknown Form Exception";
};

Form* Intern::makeForm(std::string formName, std::string target) 
{
    int i = 0;
    int j = -1;
    std::string names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

    while (formName != names[i] && i < 3)
        i++;
    if (i > 2)
        throw UnknownFormException();
    
    Form* forms[4] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
    while (++j < 3)
    {
        if (j != i)
            delete forms[j];
    }
    return (forms[i]);
};