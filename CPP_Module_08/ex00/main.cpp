#include "easyfind.hpp"

int
	main(void)
{
	std::list<int>		list1;

	list1.push_back(75);
	list1.push_back(45);
	list1.push_back(12);

	std::cout << "easyfind(list, 12) : " << easyfind(list1, 12) << std::endl;
	return (0);
}
