#include "Span.hpp"
Span::Span(void): _n(0){}

Span::Span(unsigned int N) : _n(N){}

Span::~Span(void){}

Span::Span(const Span &s)
{
	*this = s;
}

Span &Span::operator=(const Span &s)
{
	if (this != &s)
	{
		this->_n = s._n;
		this->_vec.clear();
		this->_vec = s._vec;
	}
	return *this;
}


void	Span::addNumber(int num)
{
	if (this->_vec.size() >= this->_n)
		throw("List is full");
	this->_vec.push_back(num);
}

int Span::shortestSpan(void)
{
	if (this->_vec.size() < 2)
		throw("Not enough values");
	std::vector<int> aux = this->_vec;
    std::sort(aux.begin(), aux.end());
	std::vector<int> diffs(aux.size());
	std::adjacent_difference(aux.begin(), aux.end(), diffs.begin());
	return *(std::min_element(++(diffs.begin()), diffs.end()));
}

int Span::longestSpan(void)
{
	if (this->_vec.size() < 2)
		throw("Not enough values");
	int min = *std::min_element(this->_vec.begin(), this->_vec.end());
	int max = *std::max_element(this->_vec.begin(), this->_vec.end());
	return (max - min);
}