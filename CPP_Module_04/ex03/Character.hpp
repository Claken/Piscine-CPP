#ifndef CHARACTER_HPP

#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	protected :

	public :

	Character(void);
	Character(Character const & instance);
	virtual ~Character(void) {};

	Character&		operator=(Character const & instance);
};

#endif
