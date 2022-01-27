#include "MutantStack.hpp"
#include <iostream>
#include <list>
#include <vector>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "mstack.top()   = " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "mstack.size()  = " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << "mstack.empty() = " << mstack.empty() << std::endl;

	MutantStack<int>::const_iterator cit = mstack.begin();
	MutantStack<int>::const_iterator cite = mstack.end();

	++cit;
	--cit;
	cit++;
	cit--;
	while (cit != cite)
	{
		std::cout << "mstack const_iterator : " << *cit << std::endl;
		cit++;
	}
	std::cout << std::endl;

	MutantStack<int>::const_reverse_iterator crit = mstack.rbegin();
	MutantStack<int>::const_reverse_iterator crite = mstack.rend();

	++crit;
	--crit;
	crit++;
	crit--;
	while (crit != crite)
	{
		std::cout << "mstack const_reverse_iterator : " << *crit << std::endl;
		crit++;
	}
	std::cout << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	it++;
	it--;
	while (it != ite)
	{
		std::cout << "(" << *it << " * 2)" << std::endl;
		*it = *it * 2;
		std::cout << "mstack iterator : " << *it << std::endl;
		it++;
	}
	std::cout << std::endl;

	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	
	++rit;
	--rit;
	rit++;
	rit--;
	while (rit != rite)
	{
		std::cout << "(" << *rit << " * 2)" << std::endl;
		*rit = *rit / 2;
		std::cout << "mstack reverse_iterator : " << *rit << std::endl;
		rit++;
	}
	std::cout << std::endl;

	std::stack<int> s(mstack);

	std::cout << "std::stack<int> s(mstack)" << std::endl;
	std::cout << "s.top() = " << s.top() << std::endl;
	std::cout << "s.size() = " << s.size() << std::endl;
	return 0;
}