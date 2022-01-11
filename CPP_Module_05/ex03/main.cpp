#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int
	main(void)
{
	Intern		someRandomIntern;
	Bureaucrat	Robert("Robert", 1);
	Form		*rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	Robert.signForm(*rrf);
	Robert.executeForm(*rrf);
	delete rrf;
	std::cout << std::endl;

	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
	Robert.signForm(*rrf);
	Robert.executeForm(*rrf);
	delete rrf;
	std::cout << std::endl;

	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	Robert.signForm(*rrf);
	Robert.executeForm(*rrf);
	delete rrf;
	std::cout << std::endl;

	rrf = someRandomIntern.makeForm("bliblablo", "Bender");
	return (0);
}
