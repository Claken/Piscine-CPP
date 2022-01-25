#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	try
	{
		std::cout << "addNumber(6)" << std::endl;
		sp.addNumber(6);
		std::cout << "addNumber(3)" << std::endl;
		sp.addNumber(3);
		std::cout << "addNumber(17)" << std::endl;
		sp.addNumber(17);
		std::cout << "addNumber(9)" << std::endl;
		sp.addNumber(9);
		std::cout << "addNumber(11)" << std::endl;
		sp.addNumber(11);
		std::cout << "addNumber(12)" << std::endl;
		sp.addNumber(12);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::vector<int> vect1;

	vect1.push_back(7);
	vect1.push_back(8);
	vect1.push_back(50);

	std::vector<int>::iterator it = vect1.begin();
	std::vector<int>::iterator it2 = vect1.end();
	sp.addSeveralNumbers(it, it2);

	return 0;
}