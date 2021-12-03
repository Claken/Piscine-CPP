/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sachouam <sachouam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:58:57 by sachouam          #+#    #+#             */
/*   Updated: 2021/12/03 14:58:30 by sachouam         ###   ########.fr       */
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
	std::cout << "phone number : ";
	std::cin >> clist->contacts[clist->nb].phone_number;
	std::cout << "darkest secret : ";
	std::cin >> clist->contacts[clist->nb].darkest_secret;
	clist->contacts[clist->nb].index = clist->nb + 1;
	clist->nb++;
}

void
	insert_space_and_string(const std::string str)
{
	int i;
	int j;
	int size;

	i = -1;
	size = 10 - str.size();
	while (++i < size)
		std::cout << " ";
	j = 0;
	while (j < str.size() && j < 10)
	{
		if (j == 9 && str.size() > 10)
			std::cout << ".";
		else
			std::cout << str[j];
		j++;
	}
	std::cout << "|";
}


void
	print_contact_coord(const Contact * contact)
{
	std::cout << "first name : ";
	std::cout <<  contact->first_name << std::endl;
	std::cout << "last name : ";
	std::cout <<  contact->last_name << std::endl;
	std::cout << "nickname : ";
	std::cout <<  contact->nickname << std::endl;
	std::cout << "phone number : ";
	std::cout <<  contact->phone_number << std::endl;
	std::cout << "darkest secret : ";
	std::cout <<  contact->darkest_secret << std::endl;
}

void
	cmd_search(Phonebook * clist)
{
	int			i;
	int			index;

	i = 0;
	std::cout << "     index|" << "first name|"
	<< " last name|" << "  nickname|" << std::endl;
	while (i < clist->nb)
	{
		std::cout << "         " << clist->contacts[i].index << "|";
		insert_space_and_string(clist->contacts[i].first_name);
		insert_space_and_string(clist->contacts[i].last_name);
		insert_space_and_string(clist->contacts[i].nickname);
		std::cout << std::endl;
		i++;
	}
	std::cout << "Input an index please : ";
	std::cin >> index;
	i = 0;
	while (i < clist->nb)
	{
		if (i + 1 == index)
			print_contact_coord(&clist->contacts[i]);
		i++;
	}
	if (i >= clist->nb)
		std::cout << "Sorry. This contact doesn't exist." << std::endl;
}

int	main(int ac, char **av)
{
	Phonebook		clist;
	std::string		cmd;

	while (1)
	{
		std::cin >> cmd;
		if (cmd == "SEARCH")
			cmd_search(&clist);
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
