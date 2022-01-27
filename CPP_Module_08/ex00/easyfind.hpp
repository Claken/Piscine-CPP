#pragma once

#include <iostream>
#include <exception>
#include <list>
#include <vector>
#include <deque>

class NotFound : public std::exception
{
    public :
    virtual const char* what() const throw()
    {
        return ("the number wasn't (easy) found");
    }
};

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
    throw (NotFound());
}
