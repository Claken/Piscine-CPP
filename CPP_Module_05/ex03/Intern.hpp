#pragma once

#include <iostream>

class Form;
class ShrubberyCreationForm;
class PresidentialPardonForm;
class RobotomyRequestForm;

class Intern
{
	private :

	std::string			_names[3];
	Form*				(Intern::*functions[3])(std::string);

	public :
	Intern(void);
	Intern(Intern const & instance);
	virtual ~Intern(void) {};
	Form*				makeForm(std::string name, std::string target);
	Form*				createShrubberyForm(std::string target);
	Form*				createPresidentialForm(std::string target);
	Form*				createRobotomyForm(std::string target);
	Intern&				operator=(Intern const & instance);
};
