#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:

    std::string    _name;

    public:

    Zombie(void) {};
    ~Zombie(void);
    void            announce(void) const;

};

Zombie*     newZombie( std::string name );


#endif