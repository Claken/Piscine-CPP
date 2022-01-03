#include "Character.hpp"

Character::Character(std::string name)
{
	this->_name = name;
	this->_index = 0;
	this->_inventory[0] = NULL;
	this->_inventory[1] = NULL;
	this->_inventory[2] = NULL;
	this->_inventory[3] = NULL;
}

Character::Character(Character const & instance)
{
	this->_name = instance.getName();
	this->_index = instance.getIndex();
	for (int i = 0; i < this->_index; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	for (int i = 0; i < instance.getIndex(); i++)
		this->_inventory[i] = instance._inventory[i]->clone();
}

Character::~Character(void)
{
	for (int i = 0; i < this->_index; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}

std::string const &		Character::getName() const
{
	return (this->_name);
}

int						Character::getIndex() const
{
	return (this->_index);
}

void					Character::equip(AMateria *m)
{
	if (this->_index < 4)
	{
		this->_inventory[this->_index] = m->clone();
		this->_index++;
	}
	else
	{
		std::cout << "the inventory is full" << std::endl;
	}
}

void					Character::unequip(int idx)
{
	if (idx <= 3 && this->_inventory[idx])
		this->_inventory[idx] = NULL;
}

void					Character::use(int idx, ICharacter& target)
{
	if (idx <= 3 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
}

Character&				operator=(Character const & instance)
{
	this->_name = instance.getName();
	for (int i = 0; i < this->_index; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	for (int i = 0; i < instance.getIndex(); i++)
		this->_inventory[i] = instance._inventory[i]->clone();
	this->_index = instance.getIndex();
	return (*this);
}
