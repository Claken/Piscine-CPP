#ifndef DIAMOND_TRAP_HPP

#define DIAMOND_TRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private :

	std::string		_name;

	public :

	DiamondTrap(void) {};
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const & instance);
	~DiamondTrap(void);

	void				whoAmI(void) const;
	void				attack(std::string const & target) const;
	DiamondTrap&		operator=(DiamondTrap const & instance);
};

#endif
