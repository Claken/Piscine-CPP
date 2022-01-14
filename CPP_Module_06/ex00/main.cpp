#include <iostream>
#include <string>
#include <sstream>

int
	main(int ac, char **av)
{
	if (ac != 2)
		return (-1);

	std::istringstream iss (av[1]);
	//int		conv;
	float conv = std::stof(iss);
	//iss >> conv;

	//std::cout << conv << std::endl;

	char	a = static_cast<char>(conv);
	int		b = static_cast<int>(conv);
	float	c = static_cast<float>(conv);
	double	d = static_cast<double>(conv);
	std::cout << "char   : " << a << std::endl;
	std::cout << "int    : " << b << std::endl;
	std::cout << "float  : " << c << std::endl;
	std::cout << "double : " << d << std::endl;
	return 0;
}
