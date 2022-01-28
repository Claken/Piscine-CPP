#pragma once

#include <exception>
#include <climits>
#include <algorithm>
#include <vector>

class Span
{
    private:

		unsigned int			_size;
		unsigned int			_index;
		std::vector<int>		_vect;

	public:

		class CannotStoreAnymore : public std::exception
		{
			public :
			virtual const char * what() const throw()
			{
				return ("Exception : cannot add the number");
			}
		};

		class NoSpanPossible : public std::exception
		{
			public :
			virtual const char * what() const throw()
			{
				return ("Exception : no span can be found in this container");
			}
		};

		Span() : _size(0), _index(0) {};
		Span(unsigned int nb);
		Span(Span const & instance);
		~Span() {};
		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;
		void			addNumber(int nb);

		template<typename T>
		void			addNumber(T & beg, T & end)
		{
			T it;
			it = beg;
			while (it != end)
			{
				if (this->_index < this->_size)
				{
					this->_vect.push_back(*it);
					this->_index++;
				}
				else
				{
					throw (Span::CannotStoreAnymore());
				}
				it++;
			}
		}

		Span&			operator=(Span const & instance);
};
