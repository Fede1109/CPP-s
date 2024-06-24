#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
	protected:
		std::string	_name;
		unsigned int			_health;
		unsigned int			_energy_points;
		unsigned int			_attack_dmg;

	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& ct);
		ClapTrap(void);
		~ClapTrap();
		ClapTrap& 	operator=(const ClapTrap& clap);
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

};

#endif