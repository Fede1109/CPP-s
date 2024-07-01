#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(void);
	~FragTrap(void);
	FragTrap(const FragTrap &ft);
	FragTrap& operator=(const FragTrap& frag);
	FragTrap(std::string name);
	~FragTrap();

	void highFivesGuys(void);
};
#endif