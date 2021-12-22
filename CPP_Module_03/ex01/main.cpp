#include "ScavTrap.hpp"

int
	main(void)
{
	ScavTrap	inst1("Sam");
	ScavTrap	inst2("Mas");

	inst1.attack("Mas");
	inst2.takeDamage(20);
	inst2.beRepaired(20);
	inst1.guardGate();
	inst2.attack("Sam");
	inst1.takeDamage(20);
	inst1.beRepaired(20);
	inst2.guardGate();
	return (0);
}
