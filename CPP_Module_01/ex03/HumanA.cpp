#include "HumanA.hpp"

void
	HumanA::attack(void) const
{
	std::cout << this->_name;
	std::cout << " attacks with his ";
	std::cout << this->_Weapon.getType() << std::endl;
}