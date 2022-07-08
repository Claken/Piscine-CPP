#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( (Fixed( 5.05f ) * Fixed( 2 )) );
	Fixed c( 10 );
	Fixed d( 2 );
	Fixed const e( 2.50f );

	std::cout << "a   == ";
	std::cout << a << std::endl;
	std::cout << "++a == ";
	std::cout << ++a << std::endl;
	std::cout << "a   == ";
	std::cout << a << std::endl;
	std::cout << "a++ == ";
	std::cout << a++ << std::endl;
	std::cout << "a   == ";
	std::cout << a << std::endl;
	std::cout << std::endl;

	std::cout << "a   == ";
	std::cout << a << std::endl;
	std::cout << "--a == ";
	std::cout << --a << std::endl;
	std::cout << "a   == ";
	std::cout << a << std::endl;
	std::cout << "a-- == ";
	std::cout << a-- << std::endl;
	std::cout << "a   == ";
	std::cout << a << std::endl;
	std::cout << std::endl;

	std::cout << "a == " << a << std::endl;
	std::cout << "b == " << b << std::endl;
	std::cout << "max( a, b ) == ";
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << "min( a, b ) == ";
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << "min( e, b ) == ";
	std::cout << Fixed::min( e, b ) << std::endl;
	std::cout << "max( e, b ) == ";
	std::cout << Fixed::max( e, b ) << std::endl;

	bool comp;

	comp = a < b;
	std::cout << "a < b    == ";
	std::cout << comp << std::endl;
	comp = a > b;
	std::cout << "a > b    == ";
	std::cout << comp << std::endl;
	comp = a == b;
	std::cout << "a == b   == ";
	std::cout << comp << std::endl;
	comp = a != b;
	std::cout << "a != b   == ";
	std::cout << comp << std::endl;
	a = b;
	std::cout << "(a = b)" << std::endl;
	std::cout << "a        == " << a << std::endl;
	comp = a >= b;
	std::cout << "a >= b   == ";
	std::cout << comp << std::endl;
	comp = a <= b;
	std::cout << "a <= b   == ";
	std::cout << comp << std::endl;
	comp = a == b;
	std::cout << "a == b   == ";
	std::cout << comp << std::endl;
	comp = a != b;
	std::cout << "a != b   == ";
	std::cout << comp << std::endl;
	comp = ++a <= b;
	std::cout << "++a <= b == ";
	std::cout << comp << std::endl;
	comp = a >= b;
	std::cout << "a >= b   == ";
	std::cout << comp << std::endl;

	std::cout << std::endl;

	std::cout << "c == " << c << std::endl;
	std::cout << "d == " << d << std::endl;
	std::cout << "e == " << e << std::endl;
	std::cout << "c / d == ";
	std::cout << c / d << std::endl;
	std::cout << "c * d == ";
	std::cout << c * d << std::endl;
	std::cout << "c - d == ";
	std::cout << c - d << std::endl;
	std::cout << "c + d == ";
	std::cout << c + d << std::endl;
	std::cout << "c / e == ";
	std::cout << c / e << std::endl;
	std::cout << "c * e == ";
	std::cout << c * e << std::endl;

	return 0;
}
