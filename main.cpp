/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sachouam <sachouam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 21:33:00 by sachouam          #+#    #+#             */
/*   Updated: 2021/11/28 01:28:10 by sachouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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

int
    main(void)
{
    Test    essaie;    
    char    buf[255];


    std::cout << "PTIT TEST AU CALME" << std::endl << "UN AUTRE TEST" << std::endl;
    std::cout << essaie.nb << std::endl;
    //essaie.bar();
    std::cout << "Put on input please : ";
    std::cin >> buf;
	std::cout << "Here is you input : " << buf << "" << std::endl;
    return 0;
}