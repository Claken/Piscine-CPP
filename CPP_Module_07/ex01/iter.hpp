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

template<typename T>
void		iter(T a[], int length, void (*function)(T const &))
{
	int i = 0;
	while (i < length)
	{
		function(a[i]);
		i++;
	}
}

template<typename T>
void		iter(T a[], int length, void (*function)(T &))
{
	int i = 0;
	while (i < length)
	{
		function(a[i]);
		i++;
	}
}

#endif
