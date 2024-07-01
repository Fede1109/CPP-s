#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap duko("duko");
	duko.guardGate();
	duko.highFivesGuys();
	duko.whoAmI();

	DiamondTrap ysy;
	ysy.whoAmI();
	ysy = duko;
	ysy.whoAmI();
	ysy.attack("ysy");
	return (0);
}