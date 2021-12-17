#ifndef FIXED_HPP

# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private :

	int					_fixed;
	static const int	_fracBitsNb = 8;

	public :

	Fixed(void);
	Fixed(const float nbf);
	Fixed(const int nbi);
	Fixed(Fixed const & instance);
	~Fixed(void);

	Fixed& operator=(Fixed const & instance);

	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	float				toFloat(void) const;
	int					toInt(void) const;
};

std::ostream & operator<<(std::ostream & output, Fixed const & instance);

#endif
