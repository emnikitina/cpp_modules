#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5, target) {};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy): Form(copy.getName(), copy.getSignGrade(), copy.getExecuteGrade(), copy.getTarget())
{
    this->isSigned = copy.getSignedStatus();
};

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& source)
{
    if (this == &source)
        return (*this);
    
    this->isSigned = source.getSignedStatus();
    return (*this);
};

PresidentialPardonForm::~PresidentialPardonForm() {};

std::string PresidentialPardonForm::getTarget(void) const
{
    return this->target;
};

const char* PresidentialPardonForm::GradeTooHighException::what() const throw()
{
    return "PresidentialPardonForm::Grade Too High Exception";
};

const char* PresidentialPardonForm::GradeTooLowException::what() const throw()
{
    return "PresidentialPardonForm::Grade Too Low Exception";
};

const char* PresidentialPardonForm::FormNotSignedException::what() const throw()
{
    return "PresidentialPardonForm::Form Not Signed Exception";
};

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (!this->isSigned)
        throw FormNotSignedException();

    if (executor.getGrade() > this->gradeToExecute)
        throw GradeTooLowException();

    std::cout << this->target << " has been pardoned by Zafod Beeblebrox\n";
};
