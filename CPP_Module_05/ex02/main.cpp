#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <unistd.h>

int
	main(void)
{
	Bureaucrat				Bob("Bob", 1);
	Bureaucrat				Lame("Lame", 149);
	ShrubberyCreationForm	shrubberyForm("SCForm");
	PresidentialPardonForm	presidentialForm("PPForm");
	RobotomyRequestForm		robotomizeForm("RRForm");
	std::cout << Bob << std::endl;
	std::cout << Lame << std::endl;
	std::cout << std::endl;

	Bob.executeForm(shrubberyForm);
	Lame.signForm(shrubberyForm);
	Bob.signForm(shrubberyForm);
	Lame.executeForm(shrubberyForm);
	Bob.executeForm(shrubberyForm);
	std::cout << std::endl;

	Bob.executeForm(presidentialForm);
	Lame.signForm(presidentialForm);
	Bob.signForm(presidentialForm);
	Lame.executeForm(presidentialForm);
	Bob.executeForm(presidentialForm);
	std::cout << std::endl;

	Bob.executeForm(robotomizeForm);
	Lame.signForm(robotomizeForm);
	Bob.signForm(robotomizeForm);
	Lame.executeForm(robotomizeForm);
	Bob.executeForm(robotomizeForm);
	sleep(1);
	std::cout << std::endl;
	Bob.executeForm(robotomizeForm);
	sleep(1);
	std::cout << std::endl;
	Bob.executeForm(robotomizeForm);
	sleep(1);
	std::cout << std::endl;
	Bob.executeForm(robotomizeForm);
	sleep(1);
	std::cout << std::endl;
	Bob.executeForm(robotomizeForm);
	sleep(1);
	std::cout << std::endl;
	Bob.executeForm(robotomizeForm);
	sleep(1);
	std::cout << std::endl;
	Bob.executeForm(robotomizeForm);
	sleep(1);
	std::cout << std::endl;
	Bob.executeForm(robotomizeForm);
	return (0);
}
