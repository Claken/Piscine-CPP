/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sachouam <sachouam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:58:57 by sachouam          #+#    #+#             */
/*   Updated: 2021/12/08 19:22:43 by sachouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int		Phonebook::getNb(void) const
{
	return (this->nb);
}

void	Phonebook::setNb(int n)
{
	this->nb = n;
}

int		Phonebook::getOverwrite(void) const
{
	return (this->overwrite);
}

void	Phonebook::setOverwrite(int n)
{
	this->overwrite = n;
}

int		Phonebook::cmd_add(void)
{
	std::string	str;
	int			i;

	if (this->overwrite < 8)
		i = this->overwrite;
	else
		i = this->nb;

	std::cout << "first name : ";
	getline(std::cin, str);
	if (std::cin.eof())
		return (0);
	this->contacts[i].setFirstName(str);

	std::cout << "last name : ";
	getline(std::cin, str);
	if (std::cin.eof())
		return (0);
	this->contacts[i].setLastName(str);

	std::cout << "nickname : ";
	getline(std::cin, str);
	if (std::cin.eof())
		return (0);
	this->contacts[i].setNickname(str);

	std::cout << "phone number : ";
	getline(std::cin, str);
	if (std::cin.eof())
		return (0);
	this->contacts[i].setPhoneNumber(str);

	std::cout << "darkest secret : ";
	getline(std::cin, str);
	if (std::cin.eof())
		return (0);
	this->contacts[i].setDarkestSecret(str);
	this->contacts[i].setIndex(i + 1);

	if (this->overwrite < 8)
		this->overwrite++;
	else
		this->nb++;
	return (1);
}

void	Phonebook::print_contact_coord(int i) const
{
	std::cout << std::endl;
	std::cout << "first name     : ";
	std::cout << this->contacts[i].getFirstName() << std::endl;
	std::cout << "last name      : ";
	std::cout << this->contacts[i].getLastName() << std::endl;
	std::cout << "nickname       : ";
	std::cout << this->contacts[i].getNickname() << std::endl;
	std::cout << "phone number   : ";
	std::cout << this->contacts[i].getPhoneNumber() << std::endl;
	std::cout << "darkest secret : ";
	std::cout << this->contacts[i].getDarkestSecret() << std::endl;
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

int 	Phonebook::cmd_search(void) const
{
	int			i;
	int			index;

	i = 0;
	if (this->nb)
	{
		std::cout << std::endl << "     index|" << "first name|"
		<< " last name|" << "  nickname|" << std::endl;
		while (i < this->nb)
		{
			std::cout << "         " << this->contacts[i].getIndex() << "|";
			insert_space_and_string(this->contacts[i].getFirstName());
			insert_space_and_string(this->contacts[i].getLastName());
			insert_space_and_string(this->contacts[i].getNickname());
			std::cout << std::endl;
			i++;
		}
		std::cout << std::endl;
		while (1)
		{
			std::cout << "Type a digit please : ";
			std::cin >> index;
			if (std::cin.eof())
				return (0);
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
		std::cin.clear();
		std::cin.ignore(10000, '\n');
	}
	else
		std::cout << "Add a contact first please." << std::endl;
	return (1);
}
