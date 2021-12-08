
#include "phonebook.hpp"

int	main(void)
{
	Phonebook		clist;
	std::string		cmd;
	clist.setOverwrite(8);

	while (1)
	{
		std::cout << "Type ADD, SEARCH or EXIT commande please : ";
		getline(std::cin, cmd);
        if (std::cin.eof())
            return (1);
		if (cmd == "ADD")
		{
			if (clist.getNb() == 8 && clist.getOverwrite() == 8)
				clist.setOverwrite(0);
			if (!clist.cmd_add())
				return (1);
		}
		else if (cmd == "SEARCH")
		{
			if (!clist.cmd_search())
				return (1);
		}
		else if (cmd == "EXIT")
			break ;
	}
	return (0);
}