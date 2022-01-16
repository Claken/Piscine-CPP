#ifndef FUNCTIONS_HPP

#define FUNCTIONS_HPP

#include <iostream>

template<typename T>
void	swap(T & a, T & b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename C>
C		max(C a, C b)
{
	if (a > b)
		return (a);
	return (b);
}

template<typename D>
D		min(D a, D b)
{
	if (a < b)
		return (a);
	return (b);
}

#endif
