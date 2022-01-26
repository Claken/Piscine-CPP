#include "iter.hpp"

template<typename T>
void	print_elem(T const & e)
{
	std::cout << e << std::endl;
}

void	print_up_case(char e)
{
	std::cout << static_cast<char>(e - 32) << std::endl;
}

void	to_lower_case(char & e)
{
	e = static_cast<char>(e + 32);
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
	std::cout << std::endl;
	char array3[] = { 'G', 'H', 'I', 'J', 'K', 'L' };
	iter(array3, 6, to_lower_case);
	iter(array3, 6, print_elem);

	return (0);
}
