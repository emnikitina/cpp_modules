#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
     if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->grade = grade;
};

Bureaucrat::Bureaucrat(std::string name) : name(name), grade(1) {};

Bureaucrat::Bureaucrat(int grade) : name("Bureaucrat")
{
     if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    else
        this->grade = grade;
};

Bureaucrat::Bureaucrat(const Bureaucrat& copy): name(copy.name)
{
    this->grade = copy.grade;
};

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& source)
{
    if (this == &source)
        return (*this);
    this->grade = source.grade;
    return (*this);
};

Bureaucrat::~Bureaucrat() {};

void Bureaucrat::lowGrade(void)
{
    if (this->grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade++;
    std::cout << "Now " << this->getName() << ", bureaucrat grade " << this->getGrade() << std::endl;
};

void Bureaucrat::upGrade(void)
{
    if (this->grade == 1)
        throw GradeTooHighException();
    else
        this->grade--;
    std::cout << "Now " << this->getName() << ", bureaucrat grade " << this->getGrade() << std::endl;
};

 std::string Bureaucrat::getName(void) const
 {
     return this->name;
 };

int Bureaucrat::getGrade(void) const
{
    return this->grade;
};

std::ostream& operator<<(std::ostream &out, Bureaucrat& source)
{
    out << source.getName() << ", bureaucrat grade " << source.getGrade();
    return (out);
};

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade Too High Exception";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade Too Low Exception";
}