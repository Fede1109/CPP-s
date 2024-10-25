#include "Span.hpp"
Span::Span(void): _n(0){}

Span::Span(unsigned int num) : _n(num){}

Span::~Span(void){}

Span &Span::operator=(const Span &s)
{
	this->_n = s._n;
	return *this;
}

Span::Span(const Span &s)
{
	*this = s;
}

void	Span::addNumber(int num)
{
	
}