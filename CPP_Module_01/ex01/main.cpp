#include "Zombie.hpp"

int
    main(void)
{
	int nb;
	int i;

	nb = 12;
    Zombie *zombies = zombieHorde(nb, "bob");
	i = -1;
	while (++i < nb)
		zombies[i].announce();
    delete [] zombies;
    return (0);
}