#ifndef KAREN_HPP

# define KAREN_HPP

#include <iostream>

class Karen
{
	private :

	std::string		_level[4];

	public :

	Karen(void);
	~Karen(void) {};
	void			debug( void );
	void			info( void );
	void			warning( void );
	void			error( void );
	int				findLevel(char *level);
};

#endif
