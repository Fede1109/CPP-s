#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("pepe");

	a.takeDamage(0);
	a.attack("Juan");
	a.takeDamage(5);
	a.beRepaired(4);
	a.takeDamage(10);
	a.takeDamage(20);
	a.takeDamage(20);
	a.attack("Juan");

	return (0);
}