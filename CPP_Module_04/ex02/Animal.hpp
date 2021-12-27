#ifndef ANIMAL_HPP

# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected :

	std::string		_type;

	public :

	Animal(void);
	Animal(Animal const & instance);
	virtual ~Animal(void);

	virtual void	makeSound(void) const = 0;
	std::string		getType(void) const;
	Animal&			operator=(Animal const & instance);
};

#endif
