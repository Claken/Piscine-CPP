#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	try
	{
		std::cout << "sp.addNumber(6)" << std::endl;
		sp.addNumber(6);
		std::cout << "sp.addNumber(3)" << std::endl;
		sp.addNumber(3);
		std::cout << "sp.addNumber(17)" << std::endl;
		sp.addNumber(17);
		std::cout << "sp.addNumber(9)" << std::endl;
		sp.addNumber(9);
		std::cout << "sp.addNumber(11)" << std::endl;
		sp.addNumber(11);
		std::cout << "sp.addNumber(12)" << std::endl;
		sp.addNumber(12);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "sp.shortestSpan()  = " << sp.shortestSpan() << std::endl;
	std::cout << "sp.longestSpan()   = " << sp.longestSpan() << std::endl;

	Span nsp = Span(10);

	std::vector<int> vect1;

	vect1.push_back(7);
	vect1.push_back(8);
	vect1.push_back(50);
	vect1.push_back(100);

	std::vector<int>::iterator it = vect1.begin();
	std::vector<int>::iterator it2 = vect1.end();
	try
	{
		std::cout << "addNumber from vect1 (7, 8, 50, 100)" << std::endl;
		nsp.addNumber(it, it2);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "nsp.shortestSpan() = " << nsp.shortestSpan() << std::endl;
	std::cout << "nsp.longestSpan()  = " << nsp.longestSpan() << std::endl;

	return 0;
}