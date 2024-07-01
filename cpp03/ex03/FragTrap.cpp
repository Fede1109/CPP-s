#include "FragTrap.hpp"

FragTrap::FragTrap (void) {
	this->_name = "Grandom name";
	this->_health = 100;
	this->_energy_points = 100;
	this->_attack_dmg = 30;
	std::cout << "Frag_trap Default constructor called" << std::endl;
}

FragTrap::FragTrap ( std::string name ) :ClapTrap(name)
{
	this->_health = 100;
	this->_energy_points = 100;
	this->_attack_dmg = 30;

	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destroyed" << std::endl;
}

void	FragTrap::highFivesGuys(void){
	if (this->_energy_points < 1){
		std::cout << "FragTrap " << this->_name << " is exhausted!" << std::endl;
		return;
	}
	if (this->_health < 1){
		std::cout << "FragTrap " << this->_name << " is dead!" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->_name << " wants to high five!" << std::endl;
}