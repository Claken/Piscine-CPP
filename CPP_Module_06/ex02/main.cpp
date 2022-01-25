#include "Base.hpp"

Base*	generate(void)
{
	srand((unsigned)time(0));
	int i = rand() % 3;
	if (i == 0)
	{
		std::cout << "The type generated is A" << std::endl;
		return (new A());
	}
	else if (i == 1)
	{
		std::cout << "The type generated is B" << std::endl;
		return (new B());
	}
	else
	{
		std::cout << "The type generated is C" << std::endl;
		return (new C());
	}
	return (NULL);
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A & castA = dynamic_cast<A &>(p);
		(void)castA;
		std::cout << "A" << std::endl;
	}
	catch (std::exception &bc) {}
	try
	{
		B & castB = dynamic_cast<B &>(p);
		(void)castB;
		std::cout << "B" << std::endl;
	}
	catch (std::exception &bc) {}
	try
	{
		C & castC = dynamic_cast<C &>(p);
		(void)castC;
		std::cout << "C" << std::endl;
	}
	catch (std::exception &bc) {}
}

int		main(void)
{
	Base	*inst1 = generate();
	Base&	inst2 = *inst1;

	std::cout << "identify (pointer)  : ";
	identify(inst1);
	std::cout << "identify (reference): ";
	identify(inst2);
	delete inst1;
	return (0);
}
