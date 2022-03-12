#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <cstdlib>

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
    public:
        RobotomyRequestForm(std::string target = "target");
        RobotomyRequestForm(const RobotomyRequestForm& copy);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& source);
        ~RobotomyRequestForm();

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