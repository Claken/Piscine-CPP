#include <iostream>
#include <fstream>

int
	str_error(int what)
{
	if (what == 1)
		std::cout << "file wasn't opened" << std::endl;
	else if (what == 2)
		std::cout << "s1 is empty" << std::endl;
	else if (what == 3)
		std::cout << "s2 is empty" << std::endl;
	return 0;
}


int
	ft_replace(char *filename, char *s1, char *s2)
{
	std::ifstream	ifs(filename);
	std::string		str1 = s1;
	std::string		str2 = s2;
	std::string		newFile = filename;
	newFile.append(".replace");

	if (!ifs)
		return (str_error(1));
	if (!str1.length())
		return (str_error(2));
	if (!str2.length())
		return (str_error(3));

	std::ofstream	ofs(newFile.data());
	ifs.close();
	ofs.close();
	return (1);
}

int
	main(int ac, char **av)
{
	if (ac != 4)
		return (1);
	if (!ft_replace(av[1], av[2], av[3]))
		return (1);
	return (0);
}
