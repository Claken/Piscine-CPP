#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal()
{
	std::cout << "WrongCat Constructor Called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & instance) : WrongAnimal(instance)
{
	*this = instance;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor Called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "(Wrong) Miaou Miaou" << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat const & instance)
{
	this->_type = instance.getType();
	return (*this);
}

