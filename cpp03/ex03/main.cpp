#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap duko("duko");
	// duko.guardGate();
	// duko.highFivesGuys();
	std::cout << "---------------" << std::endl;
	duko.whoAmI();
	duko.attack("pepe");
	duko.guardGate();
	std::cout << "---------------" << std::endl;

	// DiamondTrap ysy;
	// ysy.whoAmI();
	// ysy = duko;
	// ysy.whoAmI();
	// ysy.attack("ysy");
	return (0);
}