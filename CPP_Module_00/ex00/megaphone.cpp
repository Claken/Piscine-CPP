/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sachouam <sachouam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 23:25:04 by sachouam          #+#    #+#             */
/*   Updated: 2021/11/27 23:38:27 by sachouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int
	ft_isalpha_lowcase(int c)
{
	if ((c >= 97 && c <= 122))
		return (1);
	return (0);
}

int
    main(int ac, char **av)
{
    int		i;
    int		j;
    char	letter;

	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (i = 1; i < ac; i++)
		{
			for (j = 0; av[i][j]; j++)
			{
				letter = ft_isalpha_lowcase(av[i][j]) ? av[i][j] - 32 : av[i][j];
				std::cout << letter;
			}
		}
	}
	std::cout << std::endl;
    return 0;
}