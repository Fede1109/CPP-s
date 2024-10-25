#ifndef SPAN_HPP
#define SPAN_HPP
class Span
{
	private:
		unsigned int _n;
	public:
		Span(void);
		~Span(void);
		Span(const Span &s);
		Span(unsigned int num);
		Span &operator=(const Span &s);
		void	addNumber(int num);
		int		shorttestSpan(void);
		int		longestSpan(void);		
};
#endif