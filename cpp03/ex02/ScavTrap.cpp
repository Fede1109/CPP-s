#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_health = 100;
	this->_energy_points = 50;
	this->_attack_dmg = 20;

	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap() 
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target){
	if (this->_energy_points < 1){
		std::cout << "ScavTrap " << this->_name << " is exhausted!" << std::endl;
		return;
	}
	if (this->_health < 1){
		std::cout << "ScavTrap " << this->_name << " is died!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->_name << " annihilates " << target << " after attacking with " << this->_attack_dmg << " units of power!" << std::endl;
	return;
}

void	ScavTrap::guardGate(void){
	if (this->_energy_points < 1){
		std::cout << "ScavTrap " << this->_name << " is exhausted!" << std::endl;
		return;
	}
	if (this->_health < 1){
		std::cout << "ScavTrap " << this->_name << " is died!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->_name << " has adopted Guard keeper mode!" << std::endl;
	return;
}