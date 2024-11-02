#include "BitcoinExchange.hpp"
#include "Date.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage -> ./btc <file>" << std::endl;
		return (1);
	}
	(void) argv;
	Date date("	2024-02-a");
	if (date.getValid())
	{
		std::cout << "La fecha es válida." << std::endl;
	}
	else
	{
		std::cout << "La fecha no es válida." << std::endl;
	}

	return 0;
	return (0);
}