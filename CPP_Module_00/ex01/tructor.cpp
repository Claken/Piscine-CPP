/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tructor.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sachouam <sachouam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 21:51:40 by sachouam          #+#    #+#             */
/*   Updated: 2021/12/03 14:32:48 by sachouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact(void)
{
	std::cout << "Constructor Contact called" << std::endl;
	this->index = 0;
}

Contact::~Contact(void)
{
	std::cout << "Destructor Contact called" << std::endl;
}

Phonebook::Phonebook(void)
{
	std::cout << "Constructor Phonebook called" << std::endl;
	this->nb = 0;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Destructor Phonebook called" << std::endl;
}
