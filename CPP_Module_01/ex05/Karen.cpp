#include "Karen.hpp"

Karen::Karen(void)
{
	this->_level[0] = "DEBUG";
	this->_level[1] = "INFO";
	this->_level[2] = "WARNING";
	this->_level[3] = "ERROR";
	this->functions[0] = &Karen::debug;
	this->functions[1] = &Karen::info;
	this->functions[2] = &Karen::warning;
	this->functions[3] = &Karen::error;
}

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my \
7XL-double-cheese-triple-pickle-special-ketchup burger."
	<< std::endl << "I just love it!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra \
bacon cost more money." << std::endl << "You don’t put enough! \
If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free."
	<< std::endl << "I’ve been coming here for years \
and you just started working here last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, \
I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (level == _level[i])
		{
			(this->*functions[i])();
				return ;
		}
	}
}
