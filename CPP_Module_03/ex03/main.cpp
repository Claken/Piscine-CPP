#include "DiamondTrap.hpp"

int
	main(void)
{
	DiamondTrap		inst1("Sam");

	std::cout << inst1.getHitPoints() << std::endl;
	std::cout << inst1.getEnergyPoints() << std::endl;
	std::cout << inst1.getAttackDamage() << std::endl;
	inst1.attack("someone");
	inst1.whoAmI();
	inst1.highFivesGuys();
	inst1.guardGate();
	return (0);
}
