#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Constructor Called" << std::endl;
}

Brain::Brain(Brain const & instance)
{
	std::cout << "Brain Copy Constructor Called" << std::endl;
	*this = instance;
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor Called" << std::endl;
}

Brain&	Brain::operator=(Brain const & instance)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = instance._ideas[i];
	return (*this);
}

