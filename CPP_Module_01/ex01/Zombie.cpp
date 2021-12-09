#include "Zombie.hpp"

Zombie::~Zombie(void)
{
    std::cout << this->_name << " is destroyed" << std::endl;
}

void    Zombie::announce(void) const
{
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string name)
{
    this->_name = name;
}