#include "Bureaucrat.hpp"

int
	main(void)
{
	try
	{
		Bureaucrat Robert("Robert", 151);
		std::cout << Robert << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
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
			Bob.decreaseGrade();
			std::cout << Bob << std::endl;
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
			Bob.increaseGrade();
			std::cout << Bob << std::endl;
		}
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
