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
	RPN(std::string args);
	RPN &operator=(RPN const &rpn);
	RPN(RPN const &rpn);
	~RPN(void);
	void add(void);
	void sub(void);
	void mul(void);
	void div(void);
	class Error : public std::exception
	{
	public:
		const char *what(void) const throw()
		{
			return ("Error");
		}
	};
};

#endif