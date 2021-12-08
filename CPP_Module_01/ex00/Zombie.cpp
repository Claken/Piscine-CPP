#include "Zombie.hpp"

Zombie::~Zombie(void)
{
    std::cout << this->_name << std::endl;
}

void    Zombie::announce(void) const
{
    std::cout << this->_name << "BraiiiiiiinnnzzzZ..." << std::endl;
}