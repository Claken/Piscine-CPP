#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <math.h>
#include <climits>
#include <stdlib.h>

int
	main(int ac, char **av)
{
	if (ac != 2)
		return (-1);

	double conv;

	conv = strtod(av[1], NULL);

	char	a = static_cast<char>(conv);
	int		b = static_cast<int>(conv);
	float	c = static_cast<float>(conv);
	double	d = static_cast<double>(conv);
	std::cout << "char   : ";
	if (std::isnan(conv) || std::isinf(conv))
		std::cout << "impossible" << std::endl;
	else if (!std::isprint(a))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << a << "'" << std::endl;

	std::cout << "int    : ";
	if (!std::isnan(conv) && !std::isinf(conv))
		std::cout << b << std::endl;
	else
		std::cout << "impossible" << std::endl;

	std::cout << "float  : " << std::fixed << std::setprecision(1) << c << "f" << std::endl;
	std::cout << "double : " << std::fixed << std::setprecision(1) << d << std::endl;
	return 0;
}
