#include "BitcoinExchange.hpp"
#include "Date.hpp"

int main(int argc, char **argv)
{
	if (argc != 2 && argc != 3)
	{
		std::cerr << "Usage -> ./btc <file> <database(optional)>" << std::endl;
		return (1);
	}
	if (argc == 2)
	{
		Btc *data = new Btc();
		data->showWealth(argv[1]);
	}
	if (argc == 3)
	{
		Btc *data = new Btc(argv[2]);
		data->showWealth(argv[1]);
	}
	return (0);
}