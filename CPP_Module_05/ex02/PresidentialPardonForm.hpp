#ifndef PPF_HPP

#define PFF_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private :
	std::string		_target;

	public :
	PresidentialPardonForm(std::string target);
	virtual void	execute(Bureaucrat const & executor) const;
};

#endif
