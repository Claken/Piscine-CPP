#pragma once

#include <iostream>

class Span
{
    private:
		unsigned int	_size;
	public:
    	Span() {};
		Span(unsigned int nb);
    	~Span() {};
		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;
		void			addNumber(int nb);
};
