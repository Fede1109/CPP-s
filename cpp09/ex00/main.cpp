#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage -> ./btc <file>" << std::endl;
		return (1);
	}
	(void) argv;
	return (0);
}