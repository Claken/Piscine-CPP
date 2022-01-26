#pragma once

#include <exception>
#include <iostream>

template<typename T>
class Array
{
	private :

	T*				_array;
	unsigned int	_size;
	
	public :
	
	Array<T>(unsigned int n = 0) : _array(NULL), _size(n)
	{
		this->_array = new T[n];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = 0;
	};

	Array<T>(Array const & instance)
	{
		this->_size = instance._size;
		this->_array = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = instance._array[i];
	};

	~Array<T>(void)
	{
		delete [] this->_array;
	};

	int			size() const
	{
		return (this->_size);
	};

	T&			operator[](int n)
	{
		int size = this->_size;
		if (n < 0 || n > size - 1)
		{
			throw (std::exception());
		}
		return (this->_array[n]);
	};

	Array&		operator=(Array const & instance)
	{
		this->_size = instance._size;
		if (this->_array != NULL)
		{
			delete [] this->_array;
			this->_array = NULL;
		}
		this->_array = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = instance._array[i];
		return (*this);
	};
};
