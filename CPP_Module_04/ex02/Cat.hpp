#ifndef CAT_HPP

# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private :

	Brain*			_brain;

	public :

	Cat(void);
	Cat(Cat const & instance);
	virtual ~Cat(void);

	virtual void	makeSound(void) const;
	Cat&			operator=(Cat const & instance);
};

#endif
