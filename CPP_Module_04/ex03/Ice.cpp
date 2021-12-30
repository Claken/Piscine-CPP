#include "Ice.hpp"

Ice::Ice(Ice const & instance)
{
i	*this = instance;
}

void			Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria*		Ice::clone(void) const
{
	Ice *newIce = new Ice();
	return (newIce);
}
