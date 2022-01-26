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
	if (this->_list.size() < 2)
		throw (Span::NoSpanPossible());

	int									span;
	std::list<int>::const_iterator		it;

	span = INT_MAX;
	it = this->_list.begin();
	while (it != this->_list.end())
	{
		std::list<int>::const_iterator	it2;
		it2 = this->_list.begin();
		while (it2 != this->_list.end())
		{
			if (*it != *it2)
			{
				if (span > abs(*it - *it2))
					span = abs(*it - *it2);
			}
			it2++;
		}
		it++;
	}
	return (span);
}

unsigned int	Span::longestSpan() const
{
	if (this->_list.size() < 2)
		throw (Span::NoSpanPossible());

	int									span;
	std::list<int>::const_iterator		it;

	span = INT_MIN;
	it = this->_list.begin();
	while (it != this->_list.end())
	{
		std::list<int>::const_iterator	it2;
		it2 = this->_list.begin();
		while (it2 != this->_list.end())
		{
			if (*it != *it2)
			{
				if (span < abs(*it - *it2))
					span = abs(*it - *it2);
			}
			it2++;
		}
		it++;
	}
	return (span);
}

void			Span::addNumber(int nb)
{
	if (this->_index < this->_size)
	{
		this->_list.push_back(nb);
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
	this->_index = instance._index;
	for (std::list<int>::const_iterator it = instance._list.begin();
		it != instance._list.end(); it++)
	{
		this->addNumber(*it);
	}
	return (*this);
}