#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <numeric>
#include <iterator>
#include <vector>
#include <algorithm>
class Span
{
private:
	unsigned int _n;
	std::vector<int> _vec;

public:
	Span(void);
	~Span(void);
	Span(const Span &s);
	Span(unsigned int N);
	Span &operator=(const Span &s);
	void addNumber(int num);
	int shortestSpan(void);
	int longestSpan(void);
	class ListFull : public std::exception
	{
	public:
		const char *what(void) const throw();		
	};
	class EmptyVector : public std::exception
	{
	public:
		const char *what(void) const throw();		
	};
};
#endif