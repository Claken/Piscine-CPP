#include "easyfind.hpp"

int
	main(void)
{
	std::list<int>		list1;
	std::vector<int>	vect1;

	list1.push_back(75);
	list1.push_back(45);
	list1.push_back(12);

	vect1.push_back(75);
	vect1.push_back(45);
	vect1.push_back(12);

	std::cout << "easyfind(list, 12)  : " << easyfind(list1, 12) << std::endl;
	std::cout << "easyfind(list, 75)  : " << easyfind(list1, 75) << std::endl;
	std::cout << "easyfind(list, 45)  : " << easyfind(list1, 45) << std::endl;

	try
	{
		std::cout << "easyfind(list, 10)  : ";
		int nb = easyfind(list1, 10);
		std::cout << nb << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "easyfind(vect, 12)  : " << easyfind(vect1, 12) << std::endl;
	std::cout << "easyfind(vect, 75)  : " << easyfind(vect1, 75) << std::endl;
	std::cout << "easyfind(vect, 45)  : " << easyfind(vect1, 45) << std::endl;

	try
	{
		std::cout << "easyfind(vect, -10) : ";
		int nb = easyfind(vect1, -10);
		std::cout << nb << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}
