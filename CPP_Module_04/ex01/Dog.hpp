#ifndef DOG_HPP

# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public :

	Dog(void);
	Dog(Dog const & instance);
	virtual ~Dog(void);

	virtual void	makeSound(void) const;
	Dog&			operator=(Dog const & instance);
};

#endif
