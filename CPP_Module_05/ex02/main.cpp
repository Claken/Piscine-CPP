#include "Bureaucrat.hpp"
#include "Form.hpp"

int
	main(void)
{
	std::cout << "create form with value -4242, 4242" << std::endl;
	try
	{
		Form tutu("tutu", -4242, 4242);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "create form with value 42, 53" << std::endl;
	Form		toto("toto", 42, 53);
	Bureaucrat	titi("titi", 96);
	Bureaucrat	tata("tata", 21);


	std::cout << toto << std::endl;
	std::cout << titi << std::endl;
	titi.signForm(toto);
	std::cout << "form signed: " << toto.getSignBool() << std::endl;


	std::cout << std::endl;
	std::cout << toto << std::endl;
	std::cout << tata << std::endl;
	tata.signForm(toto);
	std::cout << "form signed: " << toto.getSignBool() << std::endl;
	return (0);
}
