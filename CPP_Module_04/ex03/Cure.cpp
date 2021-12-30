#include "Cure.hpp"

Cure::Cure(Cure const & instance)
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
