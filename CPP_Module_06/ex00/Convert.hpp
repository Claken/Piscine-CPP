#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <math.h>
#include <climits>
#include <stdlib.h>

class Convert
{
    private :
    
        double		_convnb;
        char		_convch;
		char		_castch;
		int			_castint;
		float		_castf;
		double		_castd;
		bool		_which;
		std::string	_str;

    public :

		Convert(char *av);
		Convert() {};
		Convert(Convert const & instance);
		~Convert() {};
		Convert&	operator=(Convert const & instance);
		void		print_char() const;
		void		print_int() const;
		void		print_float() const;
		void		print_double() const;
};