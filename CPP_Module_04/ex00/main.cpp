#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	const WrongAnimal* k = new WrongCat();
	const WrongCat wC;

	std::cout << "type of i :       " << i->getType() << std::endl;
	std::cout << "type of j :       " << j->getType() << std::endl;
	std::cout << "i->makeSound :    ";
	i->makeSound();
	std::cout << "j->makeSound :    ";
	j->makeSound();
	std::cout << "meta->makeSound : ";
	meta->makeSound();
	std::cout << "k->makeSound :    ";
	k->makeSound();
	std::cout << "wC.makeSound :    ";
	wC.makeSound();
	delete i;
	delete j;
	delete meta;
	delete k;
	return (0);
}
