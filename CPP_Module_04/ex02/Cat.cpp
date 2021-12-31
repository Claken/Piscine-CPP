#include "Cat.hpp"

Cat::Cat(void): Animal()
{
	std::cout << "Cat Constructor Called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat const & instance) : Animal(instance), _brain(NULL)
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	*this = instance;
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor Called" << std::endl;
	delete this->_brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou Miaou" << std::endl;
}

Cat&	Cat::operator=(Cat const & instance)
{
	std::cout << "operator =" << std::endl;
	this->_type = instance.getType();
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain(*instance._brain);
	return (*this);
}

