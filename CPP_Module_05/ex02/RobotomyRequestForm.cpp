#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	Form("RobotomyRequestForm", 72, 45),
	_target(target)
{}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->_sign == false)
		throw (Form::FormNotSignedException());
	if (executor.getGrade() <= this->_gradeExec)
		throw (Form::GradeTooLowException());
	else
	{

	}
}
