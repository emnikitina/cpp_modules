#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45, target) {};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy): Form(copy.getName(), copy.getSignGrade(), copy.getExecuteGrade(), copy.getTarget())
{
    this->isSigned = copy.getSignedStatus();
};

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& source)
{
    if (this == &source)
        return (*this);
    
    this->isSigned = source.getSignedStatus();
    return (*this);
};

RobotomyRequestForm::~RobotomyRequestForm() {};

std::string RobotomyRequestForm::getTarget(void) const
{
    return this->target;
};

const char* RobotomyRequestForm::GradeTooHighException::what() const throw()
{
    return "RobotomyRequestForm::Grade Too High Exception";
};

const char* RobotomyRequestForm::GradeTooLowException::what() const throw()
{
    return "RobotomyRequestForm::Grade Too Low Exception";
};

const char* RobotomyRequestForm::FormNotSignedException::what() const throw()
{
    return "RobotomyRequestForm::Form Not Signed Exception";
};

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (!this->isSigned)
        throw FormNotSignedException();

    if (executor.getGrade() > this->gradeToExecute)
        throw GradeTooLowException();
    
    std::cout << "* drilling noises *\n";
    if (rand() % 2)
        std::cout << this->target << " has been robotomized successfully\n";
    else
        std::cout << this->target << " has been fail\n";
};
