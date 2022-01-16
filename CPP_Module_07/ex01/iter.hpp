#ifndef ITER_HPP

#define ITER_HPP

#include <iostream>

template<typename T>
void		iter(T a[], int length, void (*f)(T))
{
	int i = 0;
	while (i < length)
	{
		f(a[i]);
		i++;
	}
}

#endif
