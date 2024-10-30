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
	MutantStack(void) : std::stack<T>() {}
	MutantStack(const MutantStack &m) : std::stack<T>(m) {}
	~MutantStack() {}
	MutantStack &operator=(const MutantStack &m)
	{
		if (this != &m)
		{
			std::stack<T>::operator=(m);
		}
		return *this;
	}
	typedef typename std::deque<T>::iterator iterator;
	typedef typename std::deque<T>::const_iterator const_iterator;
	void push(int num)
	{
		std::stack<T>::push(num);
	}
	int size(void)
	{
		return std::stack<T>::size();
	}
	void pop()
	{
		std::stack<T>::pop();
	}
	T top()
	{
		return std::stack<T>::top();
	}
	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }
	const_iterator begin() const { return this->c.begin(); }
	const_iterator end() const { return this->c.end(); }
};
#endif