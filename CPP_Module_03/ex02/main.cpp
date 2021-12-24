#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int
	main(void)
{
	ScavTrap	inst1("Sam");
	ScavTrap	inst2("Mas");
	FragTrap	inst3("Dude");

	std::cout << "name         = " << inst1.getName() << std::endl;
	std::cout << "hitpoints    = " << inst1.getHitPoints() << std::endl;
	std::cout << "energypoints = " << inst1.getEnergyPoints() << std::endl;
	std::cout << "attackdamage = " << inst1.getAttackDamage() << std::endl;
	std::cout << "name         = " << inst2.getName() << std::endl;
	std::cout << "hitpoints    = " << inst2.getHitPoints() << std::endl;
	std::cout << "energypoints = " << inst2.getEnergyPoints() << std::endl;
	std::cout << "attackdamage = " << inst2.getAttackDamage() << std::endl;
	std::cout << "name         = " << inst3.getName() << std::endl;
	std::cout << "hitpoints    = " << inst3.getHitPoints() << std::endl;
	std::cout << "energypoints = " << inst3.getEnergyPoints() << std::endl;
	std::cout << "attackdamage = " << inst3.getAttackDamage() << std::endl;

	inst1.attack("Mas");
	inst2.takeDamage(inst1.getAttackDamage());
	inst2.beRepaired(20);
	inst1.guardGate();
	inst2.attack("Sam");
	inst1.takeDamage(inst2.getAttackDamage());
	inst1.beRepaired(20);
	inst2.guardGate();
	inst3.attack("nobody");
	inst3.highFivesGuys();
	return (0);
}
