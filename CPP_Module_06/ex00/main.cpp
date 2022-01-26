#include "Convert.hpp"

int
	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "You need ONE argument" << std::endl;
		return (-1);
	}

	Convert conv(av[1]);

	conv.print_char();
	conv.print_int();
	conv.print_float();
	conv.print_double();
	
	return 0;
}
