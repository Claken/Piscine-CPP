#pragma once

#include <exception>
#include <algorithm>

class NotFound : public std::exception
{
	public :
	virtual const char* what() const throw()
	{
		return ("the number wasn't (easy) found");
	}
};

template<typename T>
typename T::iterator easyfind(T & c, int const & nb)
{
	typename T::iterator it = std::find(c.begin(), c.end(), nb);
	if (it == c.end())
		throw (NotFound());
	return (it);
}

template<typename T>
typename T::const_iterator easyfind(T const & c, int const & nb)
{
	typename T::const_iterator it = std::find(c.begin(), c.end(), nb);
	if (it == c.end())
		throw (NotFound());
	return (it);
}
