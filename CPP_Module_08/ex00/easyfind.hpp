#pragma once

#include <iostream>
#include <exception>
#include <list>
#include <vector>

template<typename T>
int    easyfind(T const & lst, int nb)
{
    typename T::const_iterator it;

    it = lst.begin();
    while (it != lst.end())
    {
        if (*it == nb)
            return (*it);
        ++it;
    }
    throw (std::exception());
}
