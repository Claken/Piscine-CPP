#ifndef KAREN_HPP

# define KAREN_HPP

#include <iostream>

class Karen
{
	private :

	std::string		_level[4];
	void			(Karen::*functions[4])(void);
	void			debug( void );
	void			info( void );
	void			warning( void );
	void			error( void );

	public :

	Karen(void);
	~Karen(void) {};
	void			complain( std::string level );
};

#endif
