#include "Data.hpp"

Data::Data(int i, float f, char c)
{
	this->_ivalue = i;
	this->_fvalue = f;
	this->_cvalue = c;
}

Data::Data(const Data & instance)
{
	*this = instance;
}

int		Data::getIValue() const
{
	return (this->_ivalue);
}

float	Data::getFValue() const
{
	return (this->_fvalue);
}

char	Data::getCValue() const
{
	return (this->_cvalue);
}

Data&	Data::operator=(Data const & instance)
{
	this->_cvalue = instance._cvalue;
	this->_fvalue = instance._fvalue;
	this->_ivalue = instance._ivalue;
	return (*this);
}
