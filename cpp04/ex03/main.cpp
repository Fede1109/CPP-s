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
	tmp = src->createMateria("ice");
	//TODO: AddressSanitizer: SEGV on unknown address (pc 0x0000004cf5d3 bp 0x7ffd61c377e0 sp 0x7ffd61c37770 T0) on deleting  new Character
	// ICharacter *me = new Character("me");
	// me->equip(tmp);
	tmp = src->createMateria("cure");
	// me->equip(tmp);
	ICharacter *bob = new Character("bob");
	// me->use(0, *bob);
	// me->use(1, *bob);
	// delete bob;
	// delete me;
	delete src;
	return 0;
}