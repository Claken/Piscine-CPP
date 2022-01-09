#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	Form("RobotomyRequestForm", 72, 45),
	_target(target)
{}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{

}
