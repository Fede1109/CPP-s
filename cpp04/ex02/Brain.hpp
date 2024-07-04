#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
class Brain
{
	private:
		std::string _ideas[100];
	public:
		Brain(void);
		~Brain(void);
		Brain (const Brain& b);
		Brain &operator=(const Brain& b);
};

#endif
