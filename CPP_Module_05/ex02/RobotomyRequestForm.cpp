#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	Form("RobotomyRequestForm", 72, 45),
	_target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & instance) :
	Form(instance)
{
	*this = instance;
}

std::string					RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getSignBool() == false)
		throw (Form::FormNotSignedException());
	if (executor.getGrade() > this->getGradeExec())
		throw (Form::GradeTooLowException());
	else
	{
		std::cout << "rizzz rizzz riiiiiiizzz" << std::endl;
		srand((unsigned)time(0));
		int i = rand() % 2;
		if (i == 0)
		{
			std::cout << this->_target;
			std::cout << " has been robotomized successfully" << std::endl;
		}
		else
		{
			std::cout << "The robotomization of ";
			std::cout << this->_target << " is a failure" << std::endl;
		}
	}
}

RobotomyRequestForm&		RobotomyRequestForm::operator=(RobotomyRequestForm const & instance)
{
	this->_target = instance.getTarget();
	return (*this);
}
