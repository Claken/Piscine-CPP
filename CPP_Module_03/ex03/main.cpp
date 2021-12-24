#include "DiamondTrap.hpp"

int
	main(void)
{
	DiamondTrap		inst1("Sam");

	inst1.whoAmI();
	std::cout << "hitpoints    = " << inst1.getHitPoints() << std::endl;
	std::cout << "energypoints = " << inst1.getEnergyPoints() << std::endl;
	std::cout << "attackdamage = " << inst1.getAttackDamage() << std::endl;
	inst1.attack("someone");
	inst1.takeDamage(0);
	inst1.beRepaired(0);
	inst1.guardGate();
	inst1.highFivesGuys();
	return (0);
}
