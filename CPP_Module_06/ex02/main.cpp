#include <iostream>
#include <stdlib.h>

class Base
{
	public :
	virtual ~Base() {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base*	generate(void)
{
	srand((unsigned)time(0));
	int i = rand() % 3;
	if (i == 0)
		return (new A());
	else if (i == 1)
		return (new B());
	else
		return (new C());
	return (NULL);
}

void	identify(Base *p)
{
	(void)p;
	std::cout << "A" << std::endl;
	std::cout << "B" << std::endl;
	std::cout << "C" << std::endl;
}

void	identify(Base& p)
{
	(void)p;
	std::cout << "A" << std::endl;
	std::cout << "B" << std::endl;
	std::cout << "C" << std::endl;
}

int		main(void)
{
	Base *inst = generate();

	delete inst;
	return (0);
}
