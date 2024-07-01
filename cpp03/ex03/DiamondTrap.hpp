#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	public:

		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &diamond);
		virtual ~DiamondTrap(void);

		void whoAmI(void);
		void attack(std::string const &target);
		DiamondTrap &operator=(const DiamondTrap &other);

	private:

		std::string	_name;
};

#endif