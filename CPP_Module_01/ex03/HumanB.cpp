#include "HumanB.hpp"

void
	HumanB::attack(void) const
{
	if (this->_Weapon)
	{
		std::cout << this->_name;
		std::cout << " attacks with his ";
		std::cout << this->_Weapon->getType() << std::endl;
	}
}

void
	HumanB::setWeapon(Weapon& Arme)
{
	this->_Weapon = &Arme;
}

void
	HumanB::setType(std::string type)
{
	this->_Weapon->setType(type);
}