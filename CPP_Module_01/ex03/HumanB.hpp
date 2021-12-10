#ifndef HUMANB_HPP

#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:

		std::string		_name;
		Weapon*			_Weapon;

	public:

		HumanB(std::string name) : _name(name), _Weapon(NULL) {};
		~HumanB(void) {};
		void	attack(void) const;
		void	setWeapon(Weapon& Arme);
		void	setType(std::string type);
};

#endif