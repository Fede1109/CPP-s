#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stacck<T>
{
	// private:
	// 	std::
public:
	MutantStack(void) : std::stack<T>(){}
	MutantStack(const MutantStack &m) : std::stack<T>(m){}
	~MutantStack() {}
	MutantStack &operator=(const MutantStack &m);
};

#endif