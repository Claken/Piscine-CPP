#pragma once

#include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form
{
	private :
	std::string		_target;

	public :
	PresidentialPardonForm() : _target(NULL) {};
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const & instance);
	virtual ~PresidentialPardonForm() {};
	virtual void				execute(Bureaucrat const & executor) const;
	std::string					getTarget() const;
	PresidentialPardonForm&		operator=(PresidentialPardonForm const & instance);
};
