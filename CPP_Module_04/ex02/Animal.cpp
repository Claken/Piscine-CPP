#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal Constructor Called" << std::endl;
	this->_type = "Animal";
}

Animal::Animal(Animal const & instance)
{
	std::cout << "Animal Copy Constructor Called" << std::endl;
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

Animal&	Animal::operator=(Animal const & instance)
{
	this->_type = instance.getType();
	return (*this);
}

