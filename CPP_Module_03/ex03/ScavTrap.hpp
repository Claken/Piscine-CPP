#ifndef SCAV_TRAP_HPP

#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :

	ScavTrap(void) {};
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & instance);
	~ScavTrap(void);

	void			attack(std::string const & target);
	void			guardGate(void) const;

	ScavTrap&		operator=(ScavTrap const & instance);
};

#endif
