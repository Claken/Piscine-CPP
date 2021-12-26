#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal Constructor Called" << std::endl;
	this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const & instance)
{
	*this = instance;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Destructor Called" << std::endl;
}

std::string		WrongAnimal::getType(void) const
{
	return (this->_type);
}

void			WrongAnimal::makeSound(void) const
{
	std::cout << "** WRONG ANIMAL SOUND **" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const & instance)
{
	*this = instance;
	return (*this);
}

