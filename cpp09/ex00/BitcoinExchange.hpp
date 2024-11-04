#ifndef BITCOIN_HPP
#define BITCOIN_HPP
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include "Date.hpp"
class Btc
{
private:
	std::map<Date *, double> _data;

public:
	Btc(void);
	Btc(std::string dbfile);
	Btc(Btc &btc);
	~Btc(void);
	Btc &operator=(Btc &btc);
	void	printData(void);
	void	showWealth(std::string inputFile);
	double searchDateValue(const Date& date) const;

};
class FileError : public std::exception
{
public:
	const char *what(void) const throw()
	{
		return ("Error: could not open file.");
	}
};
#endif