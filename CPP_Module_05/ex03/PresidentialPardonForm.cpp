#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	Form("PresidentialPardonForm", 25, 5),
	_target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & instance) :
	Form(instance)
{
	*this = instance;
}

std::string			PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

void				PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getSignBool() == false)
		throw (Form::FormNotSignedException());
	if (executor.getGrade() > this->getGradeExec())
		throw (Form::GradeTooLowException());
	else
		std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

PresidentialPardonForm&
					PresidentialPardonForm::operator=(PresidentialPardonForm const & instance)
{
	this->_target = instance.getTarget();
	return (*this);
}
