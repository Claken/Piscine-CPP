#include "Karen.hpp"

int
	main(int ac, char **av)
{
	Karen	folle;

	if (ac == 2)
		folle.complain(av[1]);
	return (0);
}
