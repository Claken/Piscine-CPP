#include "Cure.hpp"

Cure::Cure(void)
{
	this->_type = "cure";
}

Cure::Cure(Cure const & instance) : AMateria(instance)
{
	*this = instance;
}

void			Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria*		Cure::clone(void) const
{
	Cure *newCure = new Cure();
	return (newCure);
}

Cure&			Cure::operator=(Cure const & instance)
{
	this->_type = instance.getType();
	return *this;
}
