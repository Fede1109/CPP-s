#include "ClapTrap.hpp"


int main(void)
{
	ClapTrap a("pepe");

	a.takeDamage(0);
	a.attack("Juan");
	a.takeDamage(5);
	a.beRepaired(4);
	a.takeDamage(20);
	a.takeDamage(20);


	ClapTrap b;
	b.takeDamage(9);
	b.attack("Pedro");
	b.takeDamage(5);
	b.attack("Pedro");
	b.attack("Pedro");
	b.attack("Pedro");

	return (0);
}