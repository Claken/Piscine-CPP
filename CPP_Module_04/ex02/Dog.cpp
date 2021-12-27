#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog Constructor Called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(Dog const & instance) : Animal(instance), _brain(NULL)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	*this = instance;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor Called" << std::endl;
	delete this->_brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "Ouaf Ouaf" << std::endl;
}

Dog&	Dog::operator=(Dog const & instance)
{
	this->_type = instance.getType();
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain(*instance._brain);
	return (*this);
}

