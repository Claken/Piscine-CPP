#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
}

AMateria::AMateria(AMateria const & instance)
{
	*this = instance;
}

void					AMateria::use(ICharacter& target)
{
	(void)target;
	std::cout << "use function in AMateria" << std::endl;
}

std::string const &		AMateria::getType() const
{
	return (this->_type);
}

AMateria&				AMateria::operator=(AMateria const & instance)
{
	this->_type = instance.getType();
	return (*this);
}
