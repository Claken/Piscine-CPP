#ifndef SCAV_TRAP_HPP

#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	protected :

	static const int	_HP = 100;
	static const int	_EP = 50;
	static const int	_AD = 20;

	public :

	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & instance);
	~ScavTrap(void);

	void			attack(std::string const & target) const;
	void			guardGate(void) const;

	ScavTrap&		operator=(ScavTrap const & instance);
};

#endif
