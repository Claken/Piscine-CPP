#include "Fixed.hpp"

Fixed::Fixed(const int nbi)
{
	this->_fixed = nbi * (1 << this->_fracBitsNb);
}

Fixed::Fixed(const float nbf)
{
	this->_fixed = roundf(nbf * (1 << this->_fracBitsNb));
}

Fixed::Fixed(Fixed const & instance)
{
	*this = instance;
}

int				Fixed::getRawBits(void) const
{
	return (this->_fixed);
}

void			Fixed::setRawBits(int const raw)
{
	this->_fixed = raw;
}

float			Fixed::toFloat(void) const
{
	return (((float)this->_fixed) / (1 << this->_fracBitsNb));
}

int				Fixed::toInt(void) const
{
	return (this->_fixed / (1 << this->_fracBitsNb));
}

Fixed&			Fixed::operator=(Fixed const & instance)
{
	this->_fixed = instance.getRawBits();
	return (*this);
}

Fixed&			Fixed::operator+(Fixed const & instance)
{
	this->_fixed += instance.getRawBits();
	return (*this);
}

Fixed&			Fixed::operator-(Fixed const & instance)
{
	this->_fixed -= instance.getRawBits();
	return (*this);
}

Fixed&			Fixed::operator*(Fixed const & instance)
{
	this->_fixed *= instance.toFloat();
	return (*this);
}

Fixed&			Fixed::operator/(Fixed const & instance)
{
	this->_fixed /= instance.getRawBits();
	return (*this);
}

bool			Fixed::operator!=(Fixed const & instance) const
{
	return (this->_fixed != instance.getRawBits() ? true : false);
}

bool			Fixed::operator==(Fixed const & instance) const
{
	return (this->_fixed == instance.getRawBits() ? true : false);
}

bool			Fixed::operator>=(Fixed const & instance) const
{
	return (this->_fixed >= instance.getRawBits() ? true : false);
}

bool			Fixed::operator<=(Fixed const & instance) const
{
	return (this->_fixed <= instance.getRawBits() ? true : false);
}

bool			Fixed::operator>(Fixed const & instance) const
{
	return (this->_fixed > instance.getRawBits() ? true : false);
}

bool			Fixed::operator<(Fixed const & instance) const
{
	return (this->_fixed < instance.getRawBits() ? true : false);
}

Fixed&			Fixed::operator++()
{
	++this->_fixed;
	return (*this);
}

Fixed			Fixed::operator++(int)
{
	Fixed copy(*this);
	++(*this);
	return (copy);
}

Fixed&			Fixed::operator--()
{
	--this->_fixed;
	return (*this);
}

Fixed			Fixed::operator--(int)
{
	Fixed copy(*this);
	--(*this);
	return (copy);
}

std::ostream&	operator<<(std::ostream & output, Fixed const & instance)
{
	output << instance.toFloat();
	return (output);
}
