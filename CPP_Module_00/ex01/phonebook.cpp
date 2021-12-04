/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sachouam <sachouam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:58:57 by sachouam          #+#    #+#             */
/*   Updated: 2021/12/04 21:42:01 by sachouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int Phonebook::cmd_add(void)
{
	std::cout << "first name : ";
	getline(std::cin, this->contacts[this->nb].first_name);
	if (std::cin.eof())
		return (0);
	std::cout << "last name : ";
	getline(std::cin, this->contacts[this->nb].last_name);
	if (std::cin.eof())
		return (0);
	std::cout << "nickname : ";
	getline(std::cin, this->contacts[this->nb].nickname);
	if (std::cin.eof())
		return (0);
	std::cout << "phone number : ";
	getline(std::cin, this->contacts[this->nb].phone_number);
	if (std::cin.eof())
		return (0);
	std::cout << "darkest secret : ";
	getline(std::cin, this->contacts[this->nb].darkest_secret);
	if (std::cin.eof())
		return (0);
	this->contacts[this->nb].index = this->nb + 1;
	this->nb++;
	return (1);
}

void Phonebook::print_contact_coord(int i) const
{
	std::cout << std::endl;
	std::cout << "first name     : ";
	std::cout << this->contacts[i].first_name << std::endl;
	std::cout << "last name      : ";
	std::cout << this->contacts[i].last_name << std::endl;
	std::cout << "nickname       : ";
	std::cout << this->contacts[i].nickname << std::endl;
	std::cout << "phone number   : ";
	std::cout << this->contacts[i].phone_number << std::endl;
	std::cout << "darkest secret : ";
	std::cout << this->contacts[i].darkest_secret << std::endl;
	std::cout << std::endl;
}

void
	insert_space_and_string(const std::string str)
{
	int 			i;
	unsigned long	j;
	int				size;

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

void Phonebook::cmd_search(void) const
{
	int			i;
	int			index;

	i = 0;
	if (this->nb)
	{
		std::cout << "     index|" << "first name|"
		<< " last name|" << "  nickname|" << std::endl;
		while (i < this->nb)
		{
			std::cout << "         " << this->contacts[i].index << "|";
			insert_space_and_string(this->contacts[i].first_name);
			insert_space_and_string(this->contacts[i].last_name);
			insert_space_and_string(this->contacts[i].nickname);
			std::cout << std::endl;
			i++;
		}
		while (1)
		{
			std::cout << std::endl << "Type a digit please : ";
			std::cin >> index;
			if (!std::cin.fail())
				break ;
			else
			{
				std::cin.clear();
				std::cin.ignore(10000, '\n');
			}
		}
		i = 0;
		while (i < this->nb)
		{
			if (i + 1 == index)
				this->print_contact_coord(i);
			i++;
		}
	}
	else
		std::cout << "Add a contact first please." << std::endl;
}

int	main(void)
{
	Phonebook		clist;
	std::string		cmd;

	while (1)
	{
		getline(std::cin, cmd);
		if (cmd == "SEARCH")
			clist.cmd_search();
		else if (cmd == "ADD")
		{
			if (clist.nb < 8)
			{
				if (!clist.cmd_add())
					break ;
			}
			else
				std::cout << "Sorry. The phonebook is full." << std::endl;
		}
		else if (cmd == "EXIT" || std::cin.eof())
			break ;
	}
	return (0);
}
