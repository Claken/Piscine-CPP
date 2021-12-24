#include "ClapTrap.hpp"

int
	main(void)
{
	ClapTrap	Inst1("Sam");
	ClapTrap	Inst2("Mas");

	std::cout << Inst1.getName() << std::endl;
	std::cout << Inst1.getHitPoints() << std::endl;
	std::cout << Inst1.getEnergyPoints() << std::endl;
	std::cout << Inst1.getAttackDamage() << std::endl;
	std::cout << Inst2.getName() << std::endl;
	std::cout << Inst2.getHitPoints() << std::endl;
	std::cout << Inst2.getEnergyPoints() << std::endl;
	std::cout << Inst2.getAttackDamage() << std::endl;
	Inst2.attack("Sam");
	Inst1.takeDamage(2);
	Inst1.beRepaired(2);
	Inst1.attack("Mas");
	Inst2.takeDamage(5);
	Inst2.beRepaired(2);
	return (0);
}
