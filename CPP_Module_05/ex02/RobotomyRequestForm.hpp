#ifndef RRF_HPP

#define RRF_HPP

#include "Form.hpp"
#include <time.h>
#include <stdlib.h>

class Bureaucrat;

class RobotomyRequestForm : public Form
{
	private :
	std::string		_target;

	public :
	RobotomyRequestForm() : _target(NULL) {};
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const & instance);
	virtual ~RobotomyRequestForm() {};
	virtual void					execute(Bureaucrat const & executor) const;
	std::string					getTarget() const;
	RobotomyRequestForm&			operator=(RobotomyRequestForm const & instance);
};

#endif
