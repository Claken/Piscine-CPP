#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongCat();
	const WrongCat wC;

	std::cout << j->getType() << " : type of j " << std::endl;
	std::cout << i->getType() << " : type of i " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	k->makeSound();
	wC.makeSound();
	delete i;
	delete j;
	delete meta;
	delete k;
	return (0);
}
