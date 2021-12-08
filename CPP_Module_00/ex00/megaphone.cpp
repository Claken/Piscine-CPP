#include <iostream>

int
    main(int ac, char **av)
{
    int		i;
    int		j;
    char	letter;

	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (i = 1; i < ac; i++)
		{
			for (j = 0; av[i][j]; j++)
			{
				letter = std::toupper(av[i][j]);
				std::cout << letter;
			}
		}
	}
	std::cout << std::endl;
}
