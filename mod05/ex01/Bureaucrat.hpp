#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Form;

class Bureaucrat
{
    private:
        const std::string name;
        int grade;

    public:
        Bureaucrat(std::string name = "Bureaucrat", int grade = 150);
        Bureaucrat(std::string name = "Bureaucrat");
        Bureaucrat(int grade = 1);
        Bureaucrat(const Bureaucrat& copy);
        Bureaucrat& operator=(const Bureaucrat& source);
        ~Bureaucrat();

        void lowGrade(void);
        void upGrade(void);

        std::string getName(void) const;
        int getGrade(void) const;

        void signForm(Form& form);

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

std::ostream& operator<<(std::ostream &out, Bureaucrat& source);

#endif