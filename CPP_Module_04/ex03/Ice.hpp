#ifndef ICE_HPP

#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public :

	Ice(void) : _type("ice") {};
	Ice(Ice const & instance);
	virtual ~Ice(void);

	virtual void	use(ICharacter& target);
	virtual			AMateria* clone(void) const;
	Ice&			operator=(Ice const & instance);
};

#endif
