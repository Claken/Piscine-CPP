#include "ClapTrap.hpp"

int
	main(void)
{
	ClapTrap	Inst1("Sam");
	ClapTrap	Inst2("Mas");

	std::cout << "name         = " << Inst1.getName() << std::endl;
	std::cout << "hitpoints    = " << Inst1.getHitPoints() << std::endl;
	std::cout << "energypoints = " << Inst1.getEnergyPoints() << std::endl;
	std::cout << "attackdamage = " << Inst1.getAttackDamage() << std::endl;
	std::cout << "name         = " << Inst2.getName() << std::endl;
	std::cout << "hitpoints    = " << Inst2.getHitPoints() << std::endl;
	std::cout << "energypoints = " << Inst2.getEnergyPoints() << std::endl;
	std::cout << "attackdamage = " << Inst2.getAttackDamage() << std::endl;
	Inst2.attack("Sam");
	Inst1.takeDamage(Inst2.getAttackDamage());
	Inst1.beRepaired(0);
	Inst1.attack("Mas");
	Inst2.takeDamage(Inst1.getAttackDamage());
	Inst2.beRepaired(0);
	return (0);
}
