/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sachouam <sachouam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:58:57 by sachouam          #+#    #+#             */
/*   Updated: 2021/12/03 02:19:51 by sachouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void
	cmd_add(Phonebook * clist)
{
	std::cout << "first name : ";
	std::cin >> clist->contacts[clist->nb].first_name;
	std::cout << "last name : ";
	std::cin >> clist->contacts[clist->nb].last_name;
	std::cout << "nickname : ";
	std::cin >> clist->contacts[clist->nb].nickname;
	std::cout << "phone name : ";
	std::cin >> clist->contacts[clist->nb].phone_number;
	std::cout << "darkest secret : ";
	std::cin >> clist->contacts[clist->nb].darkest_secret;
	clist->nb++;
}

void
	cmd_search(Phonebook * clist)
{
	int i;

	i = 0;
	std::cout << "     index|" << "first name|" << " last name|" << " nickname|" << std::endl;
	while (i < clist->nb)
	{
		std::cout << "         " << i << "|"
		<< clist->contacts[i].first_name
		<< clist->contacts[i].last_name
		<< clist->contacts[i].nickname
		<< std::endl;
		i++;
	}
}

int	main(int ac, char **av)
{
	Phonebook		clist;
	std::string		cmd;

	while (1)
	{
		std::cin >> cmd;
		if (cmd == "SEARCH")
		{
			cmd_search(&clist);
		}
		else if (cmd == "ADD")
		{
			if (clist.nb < 8)
				cmd_add(&clist);
			else
				std::cout << "Sorry. The phonebook is full." << std::endl;
		}
		else if (cmd == "EXIT")
			break ;
	}
	return (0);
}
