#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137, target) {};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy): Form(copy.getName(), copy.getSignGrade(), copy.getExecuteGrade(), copy.getTarget())
{
    this->isSigned = copy.getSignedStatus();
};

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& source)
{
    if (this == &source)
        return (*this);
    
    this->isSigned = source.getSignedStatus();
    return (*this);
};

ShrubberyCreationForm::~ShrubberyCreationForm() {};

std::string ShrubberyCreationForm::getTarget(void) const
{
    return this->target;
};

const char* ShrubberyCreationForm::GradeTooHighException::what() const throw()
{
    return "ShrubberyCreationForm::Grade Too High Exception";
};

const char* ShrubberyCreationForm::GradeTooLowException::what() const throw()
{
    return "ShrubberyCreationForm::Grade Too Low Exception";
};

const char* ShrubberyCreationForm::FormNotSignedException::what() const throw()
{
    return "ShrubberyCreationForm::Form Not Signed Exception";
};

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (!this->isSigned)
        throw FormNotSignedException();

    if (executor.getGrade() > this->gradeToExecute)
        throw GradeTooLowException();
    

    std::string tmp = this->target + "_shrubbery";
    //std::ofstream ofs(tmp.c_str());
    std::ofstream ofs(tmp);

    ofs << "         ccee88oo\n";
    ofs << "  C8O8O8Q8PoOb o8oo\n";
    ofs << " dOB69QO8PdUOpugoO9bD\n";
    ofs << "CgggbU8OU qOp qOdoUOdcb\n";
    ofs << "    6OuU  /p u gcoUodpP\n";
    ofs << "      \\\\\\//  /douUP\n";
    ofs << "        \\\\\\////\n";
    ofs << "         |||/\\n";
    ofs << "         |||\\/\n";
    ofs << "         |||||\n";
    ofs << "   .....//||||\\....\n";
    ofs.close();
    std::cout << "File " << tmp << " created, tree was written\n";
};
