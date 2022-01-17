#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap Constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const & instance)
{
	*this = instance;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void		ClapTrap::attack(std::string const & target) const
{
	std::cout << "ClapTrap " << this->_name;
	std::cout << " attack " << target;
	std::cout << ", causing " << this->_attackDamage;
	std::cout << " points of damage!" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount) const
{
	std::cout << "ClapTrap " << this->_name;
	std::cout << " took " << amount;
	std::cout << " points of damage!" << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount) const
{
	std::cout << "ClapTrap " << this->_name;
	std::cout << " regained " << amount;
	std::cout << " points of energy!" << std::endl;
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

int			ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

int			ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

int			ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

ClapTrap&	ClapTrap::operator=(ClapTrap const & instance)
{
	this->_name = instance._name;
	this->_hitPoints = instance._hitPoints;
	this->_energyPoints = instance._energyPoints;
	this->_attackDamage = instance._attackDamage;
	return (*this);
}
