#include "replace.hpp"

static int
	str_error(int what, char *filename)
{
	if (what == 1)
	{
		if (filename)
			std::cout << "Error: " << filename << " cannot be opened" << std::endl;
		else
			std::cout << "Error: file cannot be opened" << std::endl;
	}
	else if (what == 2)
		std::cout << "Error: s1 is empty" << std::endl;
	else if (what == 3)
		std::cout << "Error: s2 is empty" << std::endl;
	else if (what == 4)
		std::cout << "Error: empty file" << std::endl;
	return 0;
}

int
	ft_replace(char *filename, char *s1, char *s2)
{
	if (!filename || !s1 || !s2)
		return (0);

	std::ifstream	ifs(filename);
	std::string		str1 = s1;
	std::string		str2 = s2;
	std::string		newFile = filename;
	newFile.append(".replace");
	std::string		line;

	if (!ifs)
		return (str_error(1, filename));
	if (!str1.length())
	{
		ifs.close();
		return (str_error(2, NULL));
	}
	if (!str2.length())
	{
		ifs.close();
		return (str_error(3, NULL));
	}

	std::ofstream	ofs(newFile.data());
	int i = 0;
	while (getline(ifs, line))
	{
		if (line == str1)
			ofs << str2.data() << std::endl;
		else
			ofs << line.data() << std::endl;
		i++;
	}
	ifs.close();
	ofs.close();
	if (!line.length() && i == 0)
		return (str_error(4, NULL));
	return (1);
}

