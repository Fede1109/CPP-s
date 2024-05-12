
#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : name(name) {
    this->weap = NULL;
}

HumanB::~HumanB(){}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weap = &weapon;
}
void    HumanB::attack( void ) {
    if (this->weap != NULL && this->weap->getType() != "") {
        std::cout << name << " attacks with their " << this->weap->getType() << std::endl;
    } else {
        std::cout << name << " doesn't have a weapon to attack." << std::endl;
    }
}