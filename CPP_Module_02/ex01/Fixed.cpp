#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixed = 0;
}

Fixed::Fixed(const int nbi)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixed = nbi * (1 << this->_fracBitsNb);
}

Fixed::Fixed(const float nbf)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixed = roundf(nbf * (1 << this->_fracBitsNb));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & instance)
{
	std::cout << "Copy constructor called" << std::endl;
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
	std::cout << "Assignation operator called" << std::endl;
	this->_fixed = instance.getRawBits();
	return (*this);
}

std::ostream&	operator<<(std::ostream & output, Fixed const & instance)
{
	output << instance.toFloat();
	return (output);
}
