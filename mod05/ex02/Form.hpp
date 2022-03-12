#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
    protected:
        const std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExecute;
        const std::string target;

    public:
        Form(std::string name, int gradeRoSign, int gradeToExecute, std::string target);
        Form(const Form& copy);
        const Form& operator= (const Form& source);
        virtual ~Form();

        std::string getName(void) const;
        bool getSignedStatus(void) const;
        int getSignGrade(void) const;
        int getExecuteGrade(void) const;
        std::string getTarget(void) const;
        void setSignedStatus(void);

        void beSigned(Bureaucrat& bureaucrat);
        virtual void execute(Bureaucrat const & executor) const = 0;

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

std::ostream& operator<< (std::ostream &out, const Form& source);

#endif