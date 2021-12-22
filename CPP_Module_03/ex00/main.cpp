#include "ClapTrap.hpp"

int
	main(void)
{
	ClapTrap	Inst1("Sam");
	ClapTrap	Inst2("Mas");

	Inst2.attack("Sam");
	Inst1.takeDamage(2);
	Inst1.beRepaired(2);
	Inst1.attack("Mas");
	Inst2.takeDamage(5);
	Inst2.beRepaired(2);
	return (0);
}
