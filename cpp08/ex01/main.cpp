#include "Span.hpp"

int main()
{
	Span sp2 = Span(1);
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	try
	{
		std::cout << sp2.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		sp.addNumber(123);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	int len = 10000;

	Span sp3 = Span(len);
	srand(time(NULL));
	std::cout << "BIG STACK" << std::endl;
	for (int i = 0; i < len; i++)
	{
		int rnd = rand() % 50000;
		sp3.addNumber(rnd);
	}
	sp3.print_stack();
	return 0;
}