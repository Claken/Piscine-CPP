#include "Bureaucrat.hpp"
#include "Form.hpp"

int
	main(void)
{
	std::cout << "create form with value -4242, 4242" << std::endl;
	try
	{
		Form Important("Important", -4242, 4242);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "create form with value 42, 53" << std::endl;
	Form		Urgent("Urgent", 42, 53);
	Bureaucrat	Bob("Bob", 96);
	Bureaucrat	Bobby("Bobby", 21);


	std::cout << Urgent << std::endl;
	std::cout << Bob << std::endl;
	Bob.signForm(Urgent);
	std::cout << "form signed: " << Urgent.getSignBool() << std::endl;


	std::cout << std::endl;
	std::cout << Urgent << std::endl;
	std::cout << Bobby << std::endl;
	Bobby.signForm(Urgent);
	std::cout << "form signed: " << Urgent.getSignBool() << std::endl;
	return (0);
}
