#ifndef FIXED_HPP

# define FIXED_HPP

#include <iostream>

class Fixed
{
	private :

	int					_fixed;
	static const int	_fracBitsNb = 8;

	public :

	Fixed(void);
	Fixed(Fixed const & instance);
	~Fixed(void);

	Fixed& operator=(Fixed const & instance);

	int					getRawBits(void) const;
	void				setRawBits(int const raw);
};

#endif
