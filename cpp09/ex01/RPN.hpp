#ifndef RPN_HPP
#define RPN_HPP
#include <iostream>
#include <stack>
#include <limits>
class RPN
{
private:
	std::stack<long> _stack;
	RPN(void);

public:
	RPN &operator=(RPN const &rpn);
	RPN(RPN const &rpn);
	~RPN(void);
};

#endif