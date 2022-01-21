#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << std::endl << "Create *j = new Dog and *i = new Cat" << std::endl << std::endl;

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl << "Create zoo" << std::endl << std::endl;

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

	std::cout << std::endl << "Makesounds zoo" << std::endl << std::endl;

	int index = -1;
	while (++index < 10)
		zoo[index]->makeSound();
	
	std::cout << std::endl << "Deletes zoo" << std::endl << std::endl;

	index = -1;
	while (++index < 10)
		delete zoo[index];

	std::cout << std::endl << "cat *test1 et cat *text2(*test1)" << std::endl << std::endl;

	Cat		*test1 = new Cat();
	Cat		*test2 = new Cat(*test1);
	
	std::cout << std::endl << "Delete test1 et test2" << std::endl << std::endl;

	delete test1;
	delete test2;

	std::cout << std::endl << "Delete j et i" << std::endl << std::endl;

	delete j;
	delete i;

	return 0;
}
