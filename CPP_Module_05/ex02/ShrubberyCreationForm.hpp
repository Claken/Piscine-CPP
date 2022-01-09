#ifndef RCF_HPP

#define RCF_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private :
	std::string		_target;

	public :
	ShrubberyCreationForm(std::string target);
	virtual void	execute(Bureaucrat const & executor) const;
};

#endif
