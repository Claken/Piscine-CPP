#include "Fixed.hpp"

Fixed::Fixed(const int nbi)
{
	this->_rawBits = nbi * (1 << this->_fracBitsNb);
}

Fixed::Fixed(const float nbf)
{
	this->_rawBits = roundf(nbf * (1 << this->_fracBitsNb));
}

Fixed::Fixed(Fixed const & instance)
{
	*this = instance;
}

int				Fixed::getRawBits(void) const
{
	return (this->_rawBits);
}

void			Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

float			Fixed::toFloat(void) const
{
	return (((float)this->_rawBits) / (1 << this->_fracBitsNb));
}

int				Fixed::toInt(void) const
{
	return (this->_rawBits / (1 << this->_fracBitsNb));
}

Fixed&			Fixed::operator=(Fixed const & instance)
{
	this->_rawBits = instance.getRawBits();
	return (*this);
}

Fixed&			Fixed::operator+(Fixed const & instance)
{
	this->_rawBits += instance.getRawBits();
	return (*this);
}

Fixed&			Fixed::operator-(Fixed const & instance)
{
	this->_rawBits -= instance.getRawBits();
	return (*this);
}

Fixed&			Fixed::operator*(Fixed const & instance)
{
	this->_rawBits = (int64_t)this->_rawBits
		* (int64_t)instance.getRawBits() / (1 << this->_fracBitsNb);
	return (*this);
}

Fixed&			Fixed::operator/(Fixed const & instance)
{
	this->_rawBits = ((int64_t)this->_rawBits
		* (1 << this->_fracBitsNb)) / instance.getRawBits();
	return (*this);
}

bool			Fixed::operator!=(Fixed const & instance) const
{
	return (this->_rawBits != instance.getRawBits() ? true : false);
}

bool			Fixed::operator==(Fixed const & instance) const
{
	return (this->_rawBits == instance.getRawBits() ? true : false);
}

bool			Fixed::operator>=(Fixed const & instance) const
{
	return (this->_rawBits >= instance.getRawBits() ? true : false);
}

bool			Fixed::operator<=(Fixed const & instance) const
{
	return (this->_rawBits <= instance.getRawBits() ? true : false);
}

bool			Fixed::operator>(Fixed const & instance) const
{
	return (this->_rawBits > instance.getRawBits() ? true : false);
}

bool			Fixed::operator<(Fixed const & instance) const
{
	return (this->_rawBits < instance.getRawBits() ? true : false);
}

Fixed&			Fixed::operator++()
{
	++this->_rawBits;
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
	--this->_rawBits;
	return (*this);
}

Fixed			Fixed::operator--(int)
{
	Fixed copy(*this);
	--(*this);
	return (copy);
}

Fixed&			Fixed::min(Fixed& inst1, Fixed& inst2)
{
	return (inst1.getRawBits() < inst2.getRawBits() ? inst1 : inst2);
}

Fixed const &	Fixed::min(Fixed const & inst1, Fixed const & inst2)
{
	return (inst1.getRawBits() < inst2.getRawBits() ? inst1 : inst2);
}

Fixed&			Fixed::max(Fixed& inst1, Fixed& inst2)
{
	return (inst1.getRawBits() > inst2.getRawBits() ? inst1 : inst2);
}

Fixed const &	Fixed::max(Fixed const & inst1, Fixed const & inst2)
{
	return (inst1.getRawBits() > inst2.getRawBits() ? inst1 : inst2);
}

std::ostream&	operator<<(std::ostream & output, Fixed const & instance)
{
	output << instance.toFloat();
	return (output);
}
