#include "PresidentialPardonFormi.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	Form("PresidentialPardonForm", 25, 5),
	_target(target)
{}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
