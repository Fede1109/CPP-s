#include "Span.hpp"
Span::Span(void) : _n(0) {}

Span::Span(unsigned int N) : _n(N) {}

Span::~Span(void) {}

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

void Span::addNumber(int num)
{
	if (this->_vec.size() >= this->_n)
		throw(ListFull());
	this->_vec.push_back(num);
}

int Span::shortestSpan(void)
{
	if (this->_vec.size() < 2)
		throw(EmptyVector());
	std::vector<int> aux = this->_vec;
	std::sort(aux.begin(), aux.end());
	std::vector<int> diffs(aux.size());
	std::adjacent_difference(aux.begin(), aux.end(), diffs.begin());
	return *(std::min_element(++(diffs.begin()), diffs.end()));
}

int Span::longestSpan(void)
{
	if (this->_vec.size() < 2)
		throw(EmptyVector());
	int min = *std::min_element(this->_vec.begin(), this->_vec.end());
	int max = *std::max_element(this->_vec.begin(), this->_vec.end());
	return (max - min);
}

void Span::addNumbers(std::vector<int> vector)
{
	if (vector.size() > this->_n - this->_vec.size())
		throw EmptyVector();
	this->_vec.insert(this->_vec.end(), vector.begin(), vector.end());
}
void Span::print_stack(void)
{
	for (std::vector<int>::const_iterator it = this->_vec.begin(); it != this->_vec.end(); ++it)
		std::cout << *it << std::endl;
	std::cout << std::endl;
}
const char *Span::EmptyVector::what(void) const throw()
{
	return ("Not enough values");
}

const char *Span::ListFull::what(void) const throw()
{
	return ("List is full");
}