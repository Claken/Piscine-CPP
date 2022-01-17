#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_trap")
{
	std::cout << "DiamondTrap Constructor Called" << std::endl;
	this->_name = name;
	this->_hitPoints = FragTrap::_HP;
	this->_energyPoints = ScavTrap::_EP;
	this->_attackDamage = FragTrap::_AD;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor Called" << std::endl;
}

void			DiamondTrap::whoAmI(void) const
{
	std::cout << this->_name << std::endl;
	std::cout << ClapTrap::_name << std::endl;
}

void			DiamondTrap::attack(std::string const & target) const
{
	ScavTrap::attack(target);
}

DiamondTrap::DiamondTrap(DiamondTrap const & instance) : ClapTrap(instance),
	ScavTrap(instance), FragTrap(instance)
{
	*this = instance;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const & instance)
{
	this->_name = instance._name;
	this->_hitPoints = instance._hitPoints;
	this->_energyPoints = instance._energyPoints;
	this->_attackDamage = instance._attackDamage;
	return (*this);
}

