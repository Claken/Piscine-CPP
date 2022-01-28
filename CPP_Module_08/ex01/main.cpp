#include "Span.hpp"
#include <unistd.h>
#include <list>
#include <stdlib.h>
#include <iostream>

# define NB 100000

int main()
{
	Span sp = Span(5);
	std::cout << "Span sp = Span(5)" << std::endl;
	try
	{
		std::cout << "sp.addNumber(6)" << std::endl;
		sp.addNumber(6);
		std::cout << "sp.addNumber(3)" << std::endl;
		sp.addNumber(3);
		std::cout << "sp.addNumber(11)" << std::endl;
		sp.addNumber(11);
		std::cout << "sp.addNumber(9)" << std::endl;
		sp.addNumber(9);
		std::cout << "sp.addNumber(17)" << std::endl;
		sp.addNumber(17);
		std::cout << "sp.addNumber(12) : ";
		sp.addNumber(12);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "sp.shortestSpan()  = " << sp.shortestSpan() << std::endl;
	std::cout << "sp.longestSpan()   = " << sp.longestSpan() << std::endl;

	std::cout << std::endl;

	Span nsp = Span(5);

	std::cout << "Span nsp = Span(5)" << std::endl;

	std::vector<int> vect1;

	vect1.push_back(7);
	vect1.push_back(100);
	vect1.push_back(50);
	vect1.push_back(8);

	std::vector<int>::iterator it = vect1.begin();
	std::vector<int>::iterator it2 = vect1.end();
	try
	{
		std::cout << "addNumber from vect1 (7, 100, 50, 8)" << std::endl;
		nsp.addNumber(it, it2);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "nsp.shortestSpan() = " << nsp.shortestSpan() << std::endl;
	std::cout << "nsp.longestSpan()  = " << nsp.longestSpan() << std::endl;

	std::cout << std::endl;

	Span nnsp = Span(NB);
	
	std::cout << "Span nnsp = Span(" << NB << ")" << std::endl;

	std::list<int> listone;

	std::cout << "creation of list with " << NB << " numbers in it ";
	std::cout << "from 0 to " << NB - 1 << std::endl;
	for (unsigned int i = 0; i < NB; i++)
	{
		listone.push_back(i);
	}
	std::list<int>::iterator iit = listone.begin();
	std::list<int>::iterator iit2 = listone.end();
	try
	{
		nnsp.addNumber(iit, iit2);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "nnsp.addNumber(listone.begin(), listone.end()" << std::endl;
	std::cout << "nnsp.shortestSpan() = " << nnsp.shortestSpan() << std::endl;
	std::cout << "nnsp.longestSpan()  = " << nnsp.longestSpan() << std::endl;

	std::cout << std::endl;

	try
	{
		std::cout << "span with one number and try shortestSpan()" << std::endl;
		Span one = Span(1);
		one.addNumber(5);
		one.shortestSpan();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	Span zero = Span(0);
	try
	{
		std::cout << "span without number and try longestSpan()" << std::endl;
		zero.longestSpan();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		std::cout << "try addNumber(listone.begin(), listone.end()) on span without number";
		std::cout << std::endl;
		zero.addNumber(iit, iit2);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	Span	sp2(2);

	sp2.addNumber(1);

	sp = sp2;
	sp2.addNumber(2);
	return 0;
}