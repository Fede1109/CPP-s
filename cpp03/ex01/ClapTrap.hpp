#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string _name;
	int _health;
	int _energy_points;
	int _attack_dmg;

public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &ct);
	ClapTrap(void);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap &clap);
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif