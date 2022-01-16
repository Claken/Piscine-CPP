#include "iter.hpp"

template<typename T>
void	print_elem(T e)
{
	std::cout << e << std::endl;
}

void	print_up_case(char e)
{
	std::cout << static_cast<char>(e - 32) << std::endl;
}

int		main( void )
{
	int array[] = { 1, 2, 3, 4 };
	iter(array, 4, print_elem);
	std::cout << std::endl;
	char array2[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	iter(array2, 6, print_elem);
	std::cout << std::endl;
	iter(array2, 6, print_up_case);
	return (0);
}
