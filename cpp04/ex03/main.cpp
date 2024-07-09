#include "./AMateria.hpp"
#include"./IMateriaSource.hpp"
#include "./Ice.hpp"
#include "./Cure.hpp"
#include "./Character.hpp"
#include "./MateriaSource.hpp"

int main()
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	AMateria *tmp;
	tmp = src->createMateria("cure");	
	ICharacter *me = new Character("me");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	ICharacter *bob = new Character("bob");
	std::cout << "-----------------" << std::endl;
	me->use(0, *bob);
	// me->use(1, *bob);	
	delete bob;
	delete me;
	delete src;
	return 0;
}