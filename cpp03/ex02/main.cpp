#include "FragTrap.hpp"

int main(void)
{
	FragTrap ft("frog");

	ft.attack("pepe");
	ft.beRepaired(1);
	ft.highFivesGuys();
	for (int i = 0; i < 100; i++)
		ft.attack("pepe");
	ft.highFivesGuys();
	ft.beRepaired(30);
	ft.attack("pepe");
	return 0;
}