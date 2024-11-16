#ifndef RPN_HPP
#define RPN_HPP
#include <iostream>
#include <stack>
#include <climits>
class RPN
{
private:
	std::stack<long> _stack;
	RPN(void);
	RPN &operator=(RPN const &rpn);
	RPN(RPN const &rpn);

public:
	RPN(std::string args);
	void operation(char o);
	~RPN(void);
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