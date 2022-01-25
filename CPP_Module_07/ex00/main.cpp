#include "Functions.hpp"

class Awesome
{
	public:
	
		Awesome( int n ) : _n( n ) {};
		Awesome() {};
		bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) const { return (this->_n != rhs._n); }
		bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
		bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
		bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
		bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }


		int getN() const { return (this->_n); }
	
	private:
		int _n;
};

int		main( void )
{
	int a = 2;
	int b = 3;

	Awesome first = Awesome(4);
	Awesome second = Awesome(2);
	std::cout << "first b4 swap     = " << first.getN() << std::endl;
	std::cout << "second b4 swap    = " << second.getN() << std::endl;

	::swap( first, second );

	std::cout << "first after swap  = " << first.getN() << std::endl;
	std::cout << "second after swap = " << second.getN() << std::endl;

	std::cout << "before swap" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "after swap" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << "before swap" << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "after swap" << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return (0);
}
