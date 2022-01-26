#pragma once

#include <iostream>

template<typename T>
void		swap(T & a, T & b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T const &	max(T const & a, T const & b)
{
	if (a > b)
		return (a);
	return (b);
}

template<typename T>
T const &	min(T const & a, T const & b)
{
	if (a < b)
		return (a);
	return (b);
}
