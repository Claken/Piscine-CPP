#include "ClapTrap.hpp"

int
	main(void)
{
	ClapTrap	Inst1("Sam");
	ClapTrap	Inst2("Mas");

	Inst1.attack("Mas");
	Inst2.takeDamage(5);
	Inst2.beRepaired(2);
	return (0);
}
