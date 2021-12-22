#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int
	main(void)
{
	ScavTrap	inst1("Sam");
	ScavTrap	inst2("Mas");
	FragTrap	inst3("Dude");

	inst1.attack("Mas");
	inst2.takeDamage(20);
	inst2.beRepaired(20);
	inst1.guardGate();
	inst2.attack("Sam");
	inst1.takeDamage(20);
	inst1.beRepaired(20);
	inst2.guardGate();
	inst3.attack("nobody");
	inst3.highFivesGuys();
	return (0);
}
