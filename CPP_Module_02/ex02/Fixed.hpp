#ifndef FIXED_HPP

# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private :

	int					_rawBits;
	static const int	_fracBitsNb = 8;

	public :

	Fixed(void) : _rawBits(0) {};
	Fixed(const float nbf);
	Fixed(const int nbi);
	Fixed(Fixed const & instance);
	~Fixed(void) {};

	Fixed&	operator=(Fixed const & instance);
	Fixed&	operator+(Fixed const & instance);
	Fixed&	operator-(Fixed const & instance);
	Fixed&	operator*(Fixed const & instance);
	Fixed&	operator/(Fixed const & instance);

	Fixed&	operator++();
	Fixed	operator++(int);
	Fixed&	operator--();
	Fixed	operator--(int);

	bool	operator!=(Fixed const & instance) const;
	bool	operator==(Fixed const & instance) const;
	bool	operator>=(Fixed const & instance) const;
	bool	operator<=(Fixed const & instance) const;
	bool	operator>(Fixed const & instance) const;
	bool	operator<(Fixed const & instance) const;

	static Fixed&			min(Fixed& inst1, Fixed& inst2);
	static Fixed const &	min(Fixed const & inst1, Fixed const & inst2);
	static Fixed&			max(Fixed& inst1, Fixed& inst2);
	static Fixed const &	max(Fixed const & inst1, Fixed const & inst2);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream & operator<<(std::ostream & output, Fixed const & instance);

#endif
