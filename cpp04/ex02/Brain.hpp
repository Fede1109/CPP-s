#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
class Brain
{
	protected:
		std::string _ideas[100];
	public:
		Brain(void);
		~Brain(void);
		Brain (const Brain& b);
		Brain &operator=(const Brain& b);
		std::string getIdea(size_t index) const;
	void setIdea(size_t index, const std::string &idea);
};

#endif
