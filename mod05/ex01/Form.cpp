#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExecute): name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    this->isSigned = false;

    if (gradeToSign > 150)
        throw Form::GradeTooLowException();
    else if (gradeToSign < 1)
        throw Form::GradeTooHighException();

    if (gradeToExecute > 150)
        throw Form::GradeTooLowException();
    else if (gradeToExecute < 1)
        throw Form::GradeTooHighException();
};

Form::Form(const Form& copy): name(copy.name), isSigned(copy.isSigned), gradeToSign(copy.gradeToSign), gradeToExecute(copy.gradeToExecute) {};

const Form& Form::operator= (const Form& source)
{
    if (this == &source)
        return (*this);
    
    this->isSigned = source.getSignedStatus();
    return (*this);
};

Form::~Form() {};

std::string Form::getName(void) const
{
    return this->name;
};

bool Form::getSignedStatus(void) const
{
    return this->isSigned;
};

int Form::getSignGrade(void) const
{
    return this->gradeToSign;
};

int Form::getExecuteGrade(void) const
{
    return this->gradeToExecute;
};

void Form::setSignedStatus(void)
{
    this->isSigned = true;
};

 void Form::beSigned(Bureaucrat& bureaucrat) 
 {
    if (this->isSigned)
        std::cout << "Bureaucrat " << bureaucrat.getName() << " cannot sign " << this->name << " because it is already signed\n";
    else
    {
        bureaucrat.signForm(*this);
        if (!this->isSigned)
            throw Form::GradeTooLowException();
    }
};

std::ostream& operator<< (std::ostream &out, const Form& form) 
{
    if (form.getSignedStatus())
        out << "Form " << form.getName() << " is singned";
    else
        out << "Form " << form.getName() << " isn't singned, requared grade to sign is " << form.getSignGrade();
    return out;
};

const char* Form::GradeTooHighException::what() const throw()
{
    return "Form::Grade Too High Exception";
};

const char* Form::GradeTooLowException::what() const throw()
{
    return "Form::Grade Too Low Exception";
};