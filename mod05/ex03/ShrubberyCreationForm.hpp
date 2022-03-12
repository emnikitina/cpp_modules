#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream> 

class ShrubberyCreationForm: public Form
{
    public:
        ShrubberyCreationForm(std::string target = "target");
        ShrubberyCreationForm(const ShrubberyCreationForm& copy);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& source);
        ~ShrubberyCreationForm();

        std::string getTarget(void) const;
        void execute(Bureaucrat const & executor) const;

        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };

        class FormNotSignedException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

#endif