#ifndef CLAP_TRAP_HPP

# define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap
{
	private :

	std::string		_name;
	int				_hitPoints;
	int				_energyPoints;
	int				_attackDamage;

	public :

	ClapTrap(void) {};
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & instance);
	~ClapTrap(void);

	void			attack(std::string const & target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

	ClapTrap&		operator=(ClapTrap const & instance);

};

#endif

