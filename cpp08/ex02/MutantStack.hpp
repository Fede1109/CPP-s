#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>
#include <deque>
#include <algorithm>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
private:
public:
	MutantStack(void) {}
	MutantStack(MutantStack &cpy) { *this = cpy; }
	~MutantStack() {}
	MutantStack &operator=(const MutantStack &m)
	{
		if (this != &m)
		{
			this->c.clear();
			this->c = asg.c;
		}
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }
};
#endif