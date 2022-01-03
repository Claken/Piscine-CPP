#ifndef CHARACTER_HPP

#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter
{
	protected :

	std::string		_name;
	int				_index;
	AMateria		*_inventory[4];

	public :

	Character(void) : _index(0) {};
	Character(std::string name);
	Character(Character const & instance);
	virtual ~Character(void);

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
	int						getIndex(void) const;
	Character&				operator=(Character const & instance);
};

#endif
