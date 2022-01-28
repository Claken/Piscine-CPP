#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include "easyfind.hpp"

int
	main(void)
{
	std::list<int>		list1;
	std::vector<int>	vect1;
	std::deque<int>		dequ1;

	list1.push_back(75);
	list1.push_back(45);
	list1.push_back(12);

	vect1.push_back(75);
	vect1.push_back(45);
	vect1.push_back(12);

	dequ1.push_back(75);
	dequ1.push_back(45);
	dequ1.push_back(12);

	const std::vector<int>			vec2(vect1);
	std::vector<int>::const_iterator	cIt;

	cIt = easyfind(vec2, 12);
	std::cout << *cIt << std::endl;

	std::list<int>::iterator it;
	it = easyfind(list1, 12);
	std::cout << "easyfind(list, 12)  : " << *it << std::endl;
	it = easyfind(list1, 75);
	std::cout << "easyfind(list, 75)  : " << *it << std::endl;
	it = easyfind(list1, 45);
	std::cout << "easyfind(list, 45)  : " << *it << std::endl;

	try
	{
		std::cout << "easyfind(list, 10)  : ";
		it = easyfind(list1, 10);
		std::cout << *it << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::vector<int>::iterator it2;
	it2 = easyfind(vect1, 12);
	std::cout << "easyfind(vect, 12)  : " << *it2 << std::endl;
	it2 = easyfind(vect1, 75);
	std::cout << "easyfind(vect, 75)  : " << *it2 << std::endl;
	it2 = easyfind(vect1, 45);
	std::cout << "easyfind(vect, 45)  : " << *it2 << std::endl;

	try
	{
		std::cout << "easyfind(vect, -10) : ";
		it2 = easyfind(vect1, -10);
		std::cout << *it2 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	std::deque<int>::iterator it3;
	it3 = easyfind(dequ1, 12);
	std::cout << "easyfind(deque, 12)  : " << *it3 << std::endl;
	it3 = easyfind(dequ1, 75);
	std::cout << "easyfind(deque, 75)  : " << *it3 << std::endl;
	it3 = easyfind(dequ1, 45);
	std::cout << "easyfind(deque, 45)  : " << *it3 << std::endl;

	try
	{
		std::cout << "easyfind(deque, 100) : ";
		it3 = easyfind(dequ1, 100);
		std::cout << *it3 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
