#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
protected:
	int	_energy_points;
public:
	ScavTrap();
	~ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &st);
	ScavTrap &operator=(const ScavTrap &scav);
	void attack(std::string const &target);
	void guardGate();
};
#endif