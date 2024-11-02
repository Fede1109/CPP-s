#ifndef BITCOIN_HPP
#define BITCOIN_HPP
#include <iostream>
# include <fstream>
# include <string>
# include <map>
class Btc
{
	private:
		std::map<std::string, double> data;
	public:
		Btc(void);
		Btc(std::string dbfile);
		Btc(Btc &btc);
		~Btc(void);

		Btc &operator=(Btc &btc);
};
#endif