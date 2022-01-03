#include "Ice.hpp"

Ice::Ice(void)
{
	this->_type = "ice";
}

Ice::Ice(Ice const & instance) : AMateria(instance)
{
	*this = instance;
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

Ice&			Ice::operator=(Ice const & instance)
{
	this->_type = instance.getType();
	return *this;
}
