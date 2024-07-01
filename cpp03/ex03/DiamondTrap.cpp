#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("Generic Diamond_Trap_clap_name"), ScavTrap("Generic Diamond_Trap_clap_name"), FragTrap("Generic Diamond_Trap_clap_name")
{
	std::cout << "Diamond_trap Default constructor called" << std::endl;
	this->_name = "Generic Diamond_Trap";
	this->_health = 100;
	this->_energy_points = 50;
	this->_attack_dmg = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	std::cout << "Diamond_trap Parameter constructor called" << std::endl;
	this->_name = name;
	this->_health = 100;
	this->_energy_points = 50;
	this->_attack_dmg = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &trap)
{
	std::cout << "Diamond_trap Copy constructor called" << std::endl;
	*this = trap;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Diamond_trap Destructor called" << std::endl;
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