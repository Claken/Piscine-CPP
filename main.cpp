/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sachouam <sachouam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 21:33:00 by sachouam          #+#    #+#             */
/*   Updated: 2021/12/09 17:08:14 by sachouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

class Test
{
	public:

	int nb;

	Test(void);
	~Test(void);

	void bar(void);
};

Test::Test(void)
{
	std::cout << "Constructor called" << std::endl;
	this->nb = 100;
	this->bar();
}

Test::~Test(void)
{
	std::cout << "Destructor called" << std::endl;
}

void    Test::bar(void)
{
	std::cout << "Member function called bar" << std::endl;
}

int main(void)
{
	//Test    essaie; 
	//char    buf[255];
	std::ifstream	ifs("numbers");

	unsigned int dst1;
	unsigned int dst2;

	ifs >> dst1 >> dst2;
	std::cout << dst1 << " " << dst2 << std::endl;
	ifs.close();

	std::ofstream	ofs("test.out");

	ofs << "a random phrase" << std::endl;

	ofs.close();
	//std::cout << "PTIT TEST AU CALME" << std::endl << "UN AUTRE TEST" << std::endl;
	//std::cout << essaie.nb << std::endl;
	//essaie.bar();
	//std::cout << "Put on input please : ";
	//std::cin >> buf;
	//std::cout << "Here is you input : " << buf << "" << std::endl;
	return 0;
}