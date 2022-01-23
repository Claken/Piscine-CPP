#include "Character.hpp"

Character::Character(std::string name)
{
	this->_name = name;
	this->_index = 0;
	this->_inventory[0] = NULL;
	this->_inventory[1] = NULL;
	this->_inventory[2] = NULL;
	this->_inventory[3] = NULL;
	this->_saved[0] = NULL;
	this->_saved[1] = NULL;
	this->_saved[2] = NULL;
	this->_saved[3] = NULL;
}

Character::Character(Character const & instance)
{
	*this = instance;
}

Character::~Character(void)
{
	for (int i = 0; i < this->_index; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->_saved[i])
			delete this->_saved[i];
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
		std::cout << "the inventory is full for " << this->_name << std::endl;
	}
}

void					Character::unequip(int idx)
{
	if ((idx >= 0 && idx <= 3) && this->_inventory[idx])
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_saved[i] == NULL)
			{
				this->_saved[i] = this->_inventory[idx];
				break;
			}
		}
		this->_inventory[idx] = NULL;
	}
}

void					Character::use(int idx, ICharacter& target)
{
	if ((idx >= 0 && idx <= 3) && this->_inventory[idx])
		this->_inventory[idx]->use(target);
}

Character&				Character::operator=(Character const & instance)
{
	this->_name = instance.getName();
	for (int i = 0; i < this->_index; i++)
	{
		if (this->_inventory[i])
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	}
	for (int i = 0; i < instance.getIndex(); i++)
	{
		if (instance._inventory[i])
			this->_inventory[i] = instance._inventory[i]->clone();
	}
	this->_index = instance.getIndex();
	for (int i = 0; i < 4; i++)
	{
		if (this->_saved[i])
		{
			delete this->_saved[i];
			this->_saved[i] = NULL;
		}
		if (instance._saved[i])
			this->_saved[i] = instance._saved[i]->clone();
	}
	return (*this);
}
