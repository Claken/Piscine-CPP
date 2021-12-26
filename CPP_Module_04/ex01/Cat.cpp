#include "Cat.hpp"

Cat::Cat(void): Animal()
{
	std::cout << "Cat Constructor Called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const & instance) : Animal(instance)
{
	*this = instance;
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor Called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou Miaou" << std::endl;
}

Cat&	Cat::operator=(Cat const & instance)
{
	*this = instance;
	return (*this);
}

