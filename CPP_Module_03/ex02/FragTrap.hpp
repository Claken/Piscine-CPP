#ifndef FRAG_TRAP_HPP

#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public :

	FragTrap(void) {};
	FragTrap(std::string name);
	FragTrap(FragTrap const & instance);
	~FragTrap(void);

	void			highFivesGuys(void) const;
	void			attack(std::string const & target) const;

	FragTrap&		operator=(FragTrap const & instance);
};

#endif

