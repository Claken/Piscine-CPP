#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl;
	const Animal	*zoo[10];
	zoo[0] = new Dog();
	zoo[1] = new Dog();
	zoo[2] = new Dog();
	zoo[3] = new Dog();
	zoo[4] = new Dog();
	zoo[5] = new Cat();
	zoo[6] = new Cat();
	zoo[7] = new Cat();
	zoo[8] = new Cat();
	zoo[9] = new Cat();
	int index = -1;
	std::cout << std::endl;
	while (++index < 10)
		zoo[index]->makeSound();
	index = -1;
	std::cout << std::endl;
	while (++index < 10)
		delete zoo[index];
	std::cout << std::endl;
	Cat		*test1 = new Cat();
	Cat		*test2 = new Cat(*test1);
	delete test1;
	delete test2;
	std::cout << std::endl;
	delete j;
	delete i;
	return 0;
}
