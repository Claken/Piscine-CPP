#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Constructor Called" << std::endl;
}

Brain::Brain(Brain const & instance)
{
	*this = instance;
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor Called" << std::endl;
}

Brain&	Brain::operator=(Brain const & instance)
{
	*this = instance;
	return (*this);
}

