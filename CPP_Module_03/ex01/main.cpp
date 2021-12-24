#include "ScavTrap.hpp"

int
	main(void)
{
	ScavTrap	inst1("Sam");
	ScavTrap	inst2("Mas");

	std::cout << inst1.getName() << std::endl;
	std::cout << inst1.getHitPoints() << std::endl;
	std::cout << inst1.getEnergyPoints() << std::endl;
	std::cout << inst1.getAttackDamage() << std::endl;
	std::cout << inst2.getName() << std::endl;
	std::cout << inst2.getHitPoints() << std::endl;
	std::cout << inst2.getEnergyPoints() << std::endl;
	std::cout << inst2.getAttackDamage() << std::endl;

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
