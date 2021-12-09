#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon Arme)
{
    this->_Weapon = Arme(name);
}