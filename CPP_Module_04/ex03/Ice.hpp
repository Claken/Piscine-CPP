#ifndef ICE_HPP

#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
	public :

	Ice(void);
	Ice(Ice const & instance);
	virtual ~Ice(void);

	virtual void	use(ICharacter& target);
	Ice&			operator=(Ice const & instance);
};

#endif
