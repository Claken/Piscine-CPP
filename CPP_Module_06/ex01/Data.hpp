#ifndef DATA_HPP

#define DATA_HPP

#include <stdint.h>
#include <iostream>

class Data
{
	private :
		int			_ivalue;
		float		_fvalue;
		char		_cvalue;
	public :
		Data() : _ivalue(0), _fvalue(0), _cvalue(0) {};
		Data(int i, float f, char c);
		Data(const Data & instance);
		virtual ~Data() {};
		int			getIValue() const;
		float		getFValue() const;
		char		getCValue() const;
		Data&		operator=(Data const & instance);
};

#endif
