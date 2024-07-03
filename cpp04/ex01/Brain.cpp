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
// Brain& Brain::operator=(const Brain& b)
// {


// }