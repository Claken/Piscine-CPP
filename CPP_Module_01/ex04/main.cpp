#include "replace.hpp"

int
	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Error: not enough arguments" << std::endl;
		return (1);
	}
	if (!ft_replace(av[1], av[2], av[3]))
		return (1);
	return (0);
}
