#include "Span.hpp"

Span::Span(unsigned int nb) : _size(nb)
{
	this->_index = 0;
}

Span::Span(Span const & instance) : _size(instance._size)
{
	*this = instance;
}

unsigned int	Span::shortestSpan() const
{
	if (this->_vect.size() < 2)
		throw (Span::NoSpanPossible());

	unsigned int span = UINT_MAX;

	std::vector<int> tmp = this->_vect;

	std::sort (tmp.begin(), tmp.end());

	std::vector<int>::const_iterator it = tmp.begin();
	std::vector<int>::const_iterator ite = tmp.end();
	while (it + 1 != ite)
	{
		unsigned int diff = *(it + 1) - *it;
		if (span > diff)
			span = diff;
		it++;
	}
	return (span);
}

unsigned int	Span::longestSpan() const
{
	if (this->_vect.size() < 2)
		throw (Span::NoSpanPossible());

	unsigned int span;

	span = *std::max_element(this->_vect.begin(), this->_vect.end())
		- *std::min_element(this->_vect.begin(), this->_vect.end());
	return (span);
}

void			Span::addNumber(int nb)
{
	if (this->_index < this->_size)
	{
		this->_vect.push_back(nb);
		this->_index++;
	}
	else
	{
		throw (Span::CannotStoreAnymore());
	}
}

Span&			Span::operator=(Span const & instance)
{
	this->_size = instance._size;
	this->_index = 0;
	for (std::vector<int>::const_iterator it = instance._vect.begin();
		it != instance._vect.end(); it++)
	{
		this->addNumber(*it);
	}
	return (*this);
}