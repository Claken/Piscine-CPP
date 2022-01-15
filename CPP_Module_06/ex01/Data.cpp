#include "Data.hpp"

Data::Data(const Data & instance)
{
	*this = instance;
}

int		Data::getValue() const
{
	return (this->_value);
}

Data&	Data::operator=(const int value)
{
	this->_value = value;
	return (*this);
}
