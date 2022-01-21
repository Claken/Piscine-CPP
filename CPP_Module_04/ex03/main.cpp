#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	Character* me2 = new Character("me2");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me2->equip(tmp);
	delete tmp;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me2->equip(tmp);
	delete tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me2->equip(tmp);
	delete tmp;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me2->equip(tmp);
	me->equip(tmp);
	me2->equip(tmp);
	delete tmp;
	tmp = src->createMateria("caca");
	std::cout << "tmp = src->createMateria(caca) : " << tmp << std::endl;
	delete tmp;
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->unequip(2);
	me->unequip(-1);
	me->unequip(4);
	std::cout << "after unequip(2) and unequip(4)" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);
	me2->unequip(2);
	Character* me3 = new Character(*me2);
	std::cout << "after copy of me2 to me3" << std::endl;
	me3->use(0, *bob);
	me3->use(1, *bob);
	me3->use(2, *bob);
	me3->use(3, *bob);
	delete bob;
	delete me;
	delete me2;
	delete src;
	delete me3;
	//while (1);
	return 0;
}
