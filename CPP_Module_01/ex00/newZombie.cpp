#include "Zombie.hpp"


Zombie*     newZombie( std::string name )
{
    Zombie newZombie;

    newZombie.setName(name);
    return &(newZombie);
}