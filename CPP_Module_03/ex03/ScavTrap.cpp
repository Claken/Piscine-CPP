#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap Constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const & instance) : ClapTrap(instance)
{
	*this = instance;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void	ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap " << this->_name << " have enterred in Gate keeper mode" << std::endl;
}

void		ScavTrap::attack(std::string const & target) const
{
	std::cout << "ScavTrap " << this->_name;
	std::cout << " attack " << target << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const & instance)
{
	*this = instance;
	return (*this);
}
