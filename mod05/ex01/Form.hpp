#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExecute;

    public:
        Form(std::string name, int gradeRoSign, int gradeToExecute);
        Form(const Form& copy);
        const Form& operator= (const Form& source);
        ~Form();

        std::string getName(void) const;
        bool getSignedStatus(void) const;
        int getSignGrade(void) const;
        int getExecuteGrade(void) const;
        void setSignedStatus(void);

        void beSigned(Bureaucrat& bureaucrat);

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

};

std::ostream& operator<< (std::ostream &out, const Form& source);

#endif