#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal Constructor Called" << std::endl;
	this->_type = "Animal";
}

Animal::Animal(Animal const & instance)
{
	*this = instance;
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor Called" << std::endl;
}

std::string		Animal::getType(void) const
{
	return (this->_type);
}

void			Animal::makeSound(void) const
{
	std::cout << "** ANIMAL SOUND **" << std::endl;
}

Animal&	Animal::operator=(Animal const & instance)
{
	*this = instance;
	return (*this);
}

