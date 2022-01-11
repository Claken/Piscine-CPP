#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int
	main(void)
{
	Bureaucrat				Bob("Bob", 1);
	ShrubberyCreationForm	shrubberyForm("SCForm");
	PresidentialPardonForm	presidentialForm("PPForm");
	RobotomyRequestForm		robotomizeForm("RRForm");

	Bob.executeForm(shrubberyForm);
	Bob.signForm(shrubberyForm);
	Bob.executeForm(shrubberyForm);
	std::cout << std::endl;

	Bob.executeForm(presidentialForm);
	Bob.signForm(presidentialForm);
	Bob.executeForm(presidentialForm);
	std::cout << std::endl;

	Bob.executeForm(robotomizeForm);
	Bob.signForm(robotomizeForm);
	Bob.executeForm(robotomizeForm);
	Bob.executeForm(robotomizeForm);
	Bob.executeForm(robotomizeForm);
	Bob.executeForm(robotomizeForm);
	Bob.executeForm(robotomizeForm);
	Bob.executeForm(robotomizeForm);
	Bob.executeForm(robotomizeForm);
	Bob.executeForm(robotomizeForm);
	Bob.executeForm(robotomizeForm);
	return (0);
}
