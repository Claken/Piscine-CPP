#include "Karen.hpp"

int
	main(int ac, char **av)
{
	Karen	folle;
	int		i;

	if (ac != 2)
		return (1);
	i = folle.findLevel(av[1]);
	switch (i)
	{
		case 0:
			folle.debug();
			std::cout << std::endl;
		case 1:
			folle.info();
			std::cout << std::endl;
		case 2:
			folle.warning();
			std::cout << std::endl;
		case 3:
			folle.error();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}
