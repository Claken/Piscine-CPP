#include "Character.hpp"

Character::Character(std::string name)
{
	this->_name = name;
	this->_index = 0;
}

Character::Character(Character const & instance)
{
}

Character::~Character(void)
{
	
}

std::string const &		Character::getName() const
{
	return (this->_name);
}

int						Character::getIndex() const
{
	return (this->_index);
}

void			Character::equip(AMateria *m)
{
}

void			Character::unequip(int idx)
{

}

void			Character::use(int idx, ICharacter& target)
{
	this->_iventory[idx].use(target);
}

Character&		operator=(Character const & instance)
{
	this->_name = instance.getName();
	this->_index = instance.getIndex();
	for (int i = 0; i < this->_index; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	for (int i = 0; i < instance.getIndex(); i++)
		//this->_inventory[i] = instance._iclone();
	return (*this);
}
