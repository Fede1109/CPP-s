#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("DT_clap_name"), ScavTrap("DT_clap_name"), FragTrap("DT_clap_name")
{
	std::cout << "Default DiamondTrap constructor called" << std::endl;
	this->_name = "DT";
	this->_health = FragTrap::_health;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_dmg = FragTrap::_attack_dmg;
	std::cout << "VIDA:" << this->_health << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	std::cout << "Diamond_trap Parameter constructor called" << std::endl;
	this->_name = name;
	this->_health = FragTrap::_health;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_dmg = FragTrap::_attack_dmg;
}

DiamondTrap::DiamondTrap(const DiamondTrap &trap)
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = trap;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << this->_name << std::endl;
	std::cout << this->ClapTrap::_name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	this->_name = other._name;
	this->_name = other._name;
	this->_health = other._health;
	this->_energy_points = other._energy_points;
	this->_attack_dmg = other._attack_dmg;
	return *this;
}

void DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}