#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	private:
	public:
		ScavTrap();
		ScavTrap( std::string name );
		~ScavTrap();
		void	attack(std::string const& target);
		void	guardGate();

};
#endif