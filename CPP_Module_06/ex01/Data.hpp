#ifndef DATA_HPP

#define DATA_HPP

#include <stdint.h>
#include <iostream>

class Data
{
	private :
		int			_value;
	public :
		Data() : _value(0) {};
		Data(const Data & instance);
		virtual ~Data() {};
		int			getValue() const;
		Data&		operator=(const int value);
};

#endif
