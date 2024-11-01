#include "MutantStack.hpp"
int main()
{
	MutantStack<int> mstack;
	mstack.push(15);
	mstack.push(17);
	std::cout << "Size: " << mstack.size() << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout << "Top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size: " << mstack.size() << std::endl;
	std::cout << "----------------" << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(101);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "--------------STACK 1--------------- " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "-----------------S---------------" << std::endl;
	std::stack<int> s(mstack);
	std::cout << "Top copied stack: " << s.top() << std::endl;
	std::cout << "Size of copied stack: " << s.size() << std::endl;
	while (!s.empty())
	{
		std::cout << "Top of s: " << s.top() << std::endl;
		s.pop();
	}
	MutantStack<int> stack2;
	stack2 = mstack;
	it = stack2.begin();
	ite = stack2.end();
	std::cout << "--------------STACK 2--------------- " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	return 0;
}