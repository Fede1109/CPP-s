#include "ScavTrap.hpp"

int main()
{
	ScavTrap st("pepe");


	st.attack("pedrito");
	st.guardGate();
	st.beRepaired(1);
	st.guardGate();
	st.attack("pedrito");
	// for (size_t i = 0; i < 51; i++)
	// {
	// 	st.beRepaired(1);
	// }
	st.takeDamage(101);
	st.beRepaired(30);
	st.attack("pedrito");
	return 0;
}