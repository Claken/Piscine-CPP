#pragma once

#include <iostream>
#include <exception>
#include <list>
#include <vector>
#include <stdlib.h>
#include <climits>

class Span
{
    private:

		unsigned int			_size;
		unsigned int			_index;
		std::list<int>			_list;

	public:

		class CannotStoreAnymore : public std::exception
		{
			public :
			virtual const char * what() const throw()
			{
				return ("Exception : cannot store any more numbers");
			}
		};

		class NoSpanPossible : public std::exception
		{
			public :
			virtual const char * what() const throw()
			{
				return ("Exception : no span can be found in this list");
			}
		};

		Span() : _size(0), _index(0) {};
		Span(unsigned int nb);
		Span(Span const & instance);
		~Span() {};
		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;
		void			addNumber(int nb);
		Span&			operator=(Span const & instance);

		template<typename T>
		void			addSeveralNumbers(typename T::iterator & beg, typename T::iterator & end)
		{
			typename T::const_iterator it;
			it = beg;
			while (it != end)
			{
				addNumber(*it);
				it++;
			}
		}
};
