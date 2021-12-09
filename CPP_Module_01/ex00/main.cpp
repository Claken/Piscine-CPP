#include "Zombie.hpp"

int
    main(void)
{
    Zombie  shaunOfTheDead;
    Zombie  *residentEvil = newZombie("Zemmour");
    shaunOfTheDead.setName("Melanchon");
    shaunOfTheDead.announce();
    residentEvil->announce();
    randomChump("Chump");
    delete residentEvil;
    return (0);
}