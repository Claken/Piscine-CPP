#ifndef W_CAT_HPP

# define W_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public :

	WrongCat(void);
	WrongCat(WrongCat const & instance);
	virtual ~WrongCat(void);

	void				makeSound(void) const;
	WrongCat&			operator=(WrongCat const & instance);
};

#endif
