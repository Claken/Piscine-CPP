#ifndef W_ANIMAL_HPP

# define W_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected :

	std::string		_type;

	public :

	WrongAnimal(void);
	WrongAnimal(WrongAnimal const & instance);
	virtual ~WrongAnimal(void);

	void			makeSound(void) const;
	std::string		getType(void) const;
	WrongAnimal&			operator=(WrongAnimal const & instance);
};

#endif
