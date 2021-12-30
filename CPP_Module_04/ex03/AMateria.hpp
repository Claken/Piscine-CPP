#ifndef AMATERIA_HPP

#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:

	std::string		_type;

	public:

	AMateria(std::string const & type);
	AMateria(void) {};
	AMateria(AMateria const & instance);
	virtual ~AMateria(void) {};

	std::string			const & getType() const;
	virtual				AMateria* clone() const = 0;
	virtual void		use(ICharacter& target);
};

#endif
