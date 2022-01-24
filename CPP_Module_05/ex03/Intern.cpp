#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"

Intern::Intern(void)
{
	this->_names[0] = "shrubbery creation";
	this->_names[1] = "presidential pardon";
	this->_names[2] = "robotomy request";
	this->functions[0] = &Intern::createShrubberyForm;
	this->functions[1] = &Intern::createPresidentialForm;
	this->functions[2] = &Intern::createRobotomyForm;
}

Intern::Intern(Intern const & instance)
{
	*this = instance;
}

Form*		Intern::createShrubberyForm(std::string target)
{
	Form *newForm = new ShrubberyCreationForm(target);
	std::cout << "Intern creates "; 
	std::cout << "ShrubberyCreationForm" << std::endl; 
	return (newForm);
}

Form*		Intern::createPresidentialForm(std::string target)
{
	Form *newForm = new PresidentialPardonForm(target);
	std::cout << "Intern creates "; 
	std::cout << "PresidentialPardonForm" << std::endl; 
	return (newForm);
}

Form*		Intern::createRobotomyForm(std::string target)
{
	Form *newForm = new RobotomyRequestForm(target);
	std::cout << "Intern creates "; 
	std::cout << "RobotomyRequestForm" << std::endl;
	return (newForm);
}

Form*		Intern::makeForm(std::string name, std::string target)
{
	for (int i = 0; i < 3; i++)
	{
		if (name == _names[i])
			return (this->*functions[i])(target);
	}
	std::cout << "The requested form is not known" << std::endl;
	return (NULL);
}

Intern&		Intern::operator=(Intern const & instance)
{
	this->_names[0] = instance._names[0];
	this->_names[1] = instance._names[1];
	this->_names[2] = instance._names[2];
	this->functions[0] = instance.functions[0];
	this->functions[1] = instance.functions[1];
	this->functions[2] = instance.functions[2];
	return (*this);
}
