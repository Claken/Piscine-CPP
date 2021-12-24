#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap Constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap Constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const & instance) : ClapTrap(instance)
{
	*this = instance;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

void		FragTrap::highFivesGuys(void) const
{
	std::cout << "Hey guys ! Wanna high fives ?" << std::endl;
}

void		FragTrap::attack(std::string const & target) const
{
	std::cout << "FragTrap " << this->_name;
	std::cout << " attacks " << target << " ! " << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const & instance)
{
	*this = instance;
	return (*this);
}
