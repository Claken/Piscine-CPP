#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog Constructor Called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog const & instance) : Animal(instance)
{
	*this = instance;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor Called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Ouaf Ouaf" << std::endl;
}

Dog&	Dog::operator=(Dog const & instance)
{
	*this = instance;
	return (*this);
}

