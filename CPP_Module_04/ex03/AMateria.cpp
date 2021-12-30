#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
}

AMateria::AMateria(AMateria const & instance)
{
	*this = instance;
}

void			AMateria::use(ICharacter& target)
{
}

std::string		AMateria::const & getType() const
{
	return (this->_type);
}
