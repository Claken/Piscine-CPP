#include "PresidentialPardonFormi.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	Form("PresidentialPardonForm", 25, 5),
	_target(target)
{}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->_sign == false)
		throw (Form::FormNotSignedException());
	if (executor.getGrade() <= this->_gradeExec)
		throw (Form::GradeTooLowException());
	else
		std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
