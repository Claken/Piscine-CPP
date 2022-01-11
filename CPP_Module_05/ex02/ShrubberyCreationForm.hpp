#ifndef RCF_HPP

#define RCF_HPP

#include "Form.hpp"
#include <fstream>

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
	private :
	std::string		_target;

	public :
	ShrubberyCreationForm() : _target(NULL) {};
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const & instance);
	virtual ~ShrubberyCreationForm() {};
	virtual void				execute(Bureaucrat const & executor) const;
	std::string					getTarget() const;
	ShrubberyCreationForm&		operator=(ShrubberyCreationForm const & instance);
};

#endif
