#ifndef BRAIN_HPP

# define BRAIN_HPP

#include <iostream>

class Brain
{
	protected :

	std::string		_ideas[100];

	public :

	Brain(void);
	Brain(Brain const & instance);
	virtual ~Brain(void);

	Brain&			operator=(Brain const & instance);
};

#endif
