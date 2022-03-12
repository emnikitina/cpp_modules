#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern & copy);
        Intern& operator=(const Intern & source);
        ~Intern();

        Form* makeForm(std::string formName, std::string target);

        class UnknownFormException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

#endif