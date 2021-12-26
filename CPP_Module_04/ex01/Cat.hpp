#ifndef CAT_HPP

# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private :

	Brain			*brain;

	public :

	Cat(void);
	Cat(Cat const & instance);
	virtual ~Cat(void);

	virtual void	makeSound(void) const;
	Cat&			operator=(Cat const & instance);
};

#endif
