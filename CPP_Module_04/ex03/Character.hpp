#ifndef CHARACTER_HPP

#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	protected :

	std::string		_name;
	int				_index;
	AMateria		_inventory[4];

	public :

	Character(void) {};
	Character(std::string name);
	Character(Character const & instance);
	virtual ~Character(void);

	int		getIndex(void) const;
	Character&		operator=(Character const & instance);
};

#endif
