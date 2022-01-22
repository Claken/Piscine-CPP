#include "Bureaucrat.hpp"

int
	main(void)
{
	try
	{
		std::cout << "Bureaucrat : Robert, 151" << std::endl;
		Bureaucrat Robert("Robert", 151);
		std::cout << Robert << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "Bureaucrat : Roberto, 0" << std::endl;
		Bureaucrat Roberto("Roberto", 0);
		std::cout << Roberto << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat Bob("Bobby", 140);
		while (1)
		{
			std::cout << Bob << std::endl;
			Bob.decreaseGrade();
		}
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat Bob("Bob", 5);
		while (1)
		{
			std::cout << Bob << std::endl;
			Bob.increaseGrade();
		}
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
