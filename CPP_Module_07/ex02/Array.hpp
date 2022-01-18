#ifndef ARRAY_HPP

#define ARRAY_HPP

#include <exception>
#include <iostream>

template<typename T>
class Array
{
	private :

	T*				_array;
	unsigned int	_size;
	
	public :

	Array<T>(void) : _array(NULL), _size(0)
	{
		this->_array = new T[0];
	};

	Array<T>(unsigned int n) : _array(NULL), _size(n)
	{
		std::cout << "n = " << n << std::endl;
		this->_array = new T[n];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = 0;
	};

	Array<T>(Array const & instance)
	{
		*this = instance;
	};

	~Array<T>(void)
	{
		//std::cout << "destructor" << std::endl;
		delete [] this->_array;
	};

	int			size() const
	{
		return (this->_size);
	};

	T&			operator[](int n)
	{
		int size = this->_size;
		if (n < 0 || n > size)
		{
			throw (std::exception());
		}
		return (this->_array[n]);
	};

	Array&		operator=(Array const & instance)
	{
		std::cout << "1 operator = called" << std::endl;
		this->_size = instance._size;
		//if (this->_array != NULL)
		//	delete [] this->_array;
		this->_array = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = instance._array[i];
		return (*this);
	}
};

#endif
