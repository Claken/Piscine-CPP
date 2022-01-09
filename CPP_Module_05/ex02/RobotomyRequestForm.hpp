#ifndef RRF_HPP

#define RRF_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private :
	std::string		_target;

	public :
	RobotomyRequestForm(std::string target);
	virtual void	execute(Bureaucrat const & executor) const;
};

#endif
