#include "./Brain.hpp"

Brain::Brain (void)
{
	for (size_t i = 0; i < 100; i++)
	{
		_ideas[i] = "idea ";		
	}
	std::cout << "Default Brain constructor" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}
Brain& Brain::operator=(const Brain& b)
{
	for (size_t i = 0; i < 100; i++)
	{
		this->_ideas[i] = b._ideas[i];
	}
	return *this;	
}


Brain::Brain (const Brain& b)
{
	*this = b;
	std::cout << "Brain copy constructor called" << std::endl;
}
