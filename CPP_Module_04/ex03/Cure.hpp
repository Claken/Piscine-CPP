#ifndef CURE_HPP

#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
	public :

	Cure(void);
	Cure(Cure const & instance);
	virtual ~Cure(void);

	virtual void	use(ICharacter& target);
	Cure&	operator=(Cure const & instance);
};

#endif
