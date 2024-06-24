#include "ScavTrap.hpp"

int main()
{
	ScavTrap	st("pepe");
	ClapTrap	ct("juan");

	st.attack("pedrito");
	ct.attack("jose");
	st.guardGate();
	st.beRepaired(1);
	st.guardGate();
	st.attack("pedrito");
	st.beRepaired(30);
	st.attack("pedrito");
	return 0;
}