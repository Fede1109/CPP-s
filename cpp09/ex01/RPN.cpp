#include "RPN.hpp"

RPN::RPN(std::string args)
{
	bool flag = false;
	if (args.empty() || args.length() == 3)
		throw Error();
	for (size_t i = 0; i < args.length(); i++)
	{
		if (!isdigit(args[i]))
			flag = false;
		if (isdigit(args[i]) && !flag)
		{
			flag = true;
			int num = args[i] - '0';
			if (i > 0 && args[i - 1] == '-')
				this->_stack.push(-num);
			else
				this->_stack.push(num);
		}
		else if (args[i] ==  '+' || args[i] ==  '*' || args[i] ==  '/')
			operation(args[i]);
		else if (args[i] == '-')
		{
			if ((i < args.length() - 1) && isdigit(args[i + 1]))
				continue;
			operation('-');
		}
		else if (!isspace(args[i]) || (isdigit(args[i]) && flag))
			throw Error();
	}
	std::cout << this->_stack.top() << std::endl;
}

RPN::~RPN() {}

// TODO: esto es MUY refactorizable
void RPN::operation(char o)
{
	long res;
	if (this->_stack.size() < 2)
		throw Error();
	int num1 = this->_stack.top();
	_stack.pop();
	int num2 = this->_stack.top();
	_stack.pop();
	switch (o)
	{
	case '+':
		res = num2 + num1;
		break;
	case '-':
		res = num2 - num1;
		break;
	case '*':
		res = num2 * num1;
		break;
	case '/':
		if (num1 == 0)
			throw Error();
		res = num2 / num1;
		break;
	default:
		break;
	}
	this->_stack.push(res);
}
// void RPN::add(void)
// {
// 	long res;

// 	res = mun2 + num1;
// 	this->_stack.push(res);
// }

// void RPN::sub(void)
// {
// 	long res;

// 	if (this->_stack.size() < 2)
// 		throw Error();
// 	int num1 = this->_stack.top();
// 	_stack.pop();
// 	int mun2 = this->_stack.top();
// 	_stack.pop();
// 	res = mun2 - num1;
// 	this->_stack.push(res);
// }

// void RPN::div(void)
// {
// 	long res;

// 	if (this->_stack.size() < 2)
// 		throw Error();
// 	int num1 = this->_stack.top();
// 	_stack.pop();
// 	int mun2 = this->_stack.top();
// 	_stack.pop();

// 	res = mun2 / num1;
// 	this->_stack.push(res);
// }

// void RPN::mul(void)
// {
// 	long res;

// 	if (this->_stack.size() < 2)
// 		throw Error();
// 	int num1 = this->_stack.top();
// 	_stack.pop();
// 	int mun2 = this->_stack.top();
// 	_stack.pop();
// 	res = mun2 * num1;
// 	this->_stack.push(res);
// }