#include "BitcoinExchange.hpp"

static std::string trim(const std::string &str)
{
	size_t start = str.find_first_not_of(" \t\n\r\f\v");
	if (start == std::string::npos)
		return "";
	size_t end = str.find_last_not_of(" \t\n\r\f\v");
	return str.substr(start, end - start + 1);
}

Btc::~Btc()
{
	for (std::map<Date *, double>::iterator it = _data.begin(); it != _data.end(); ++it)
	{
		delete it->first;
	}
}

Btc::Btc(void)
{
	std::ifstream data;
	std::string str;
	std::string values;
	size_t pos;
	double num;
	data.open("data.csv");
	if (!data)
		throw FileError();
	for (std::string line; std::getline(data, line);)
	{
		line = trim(line);
		if (line.empty())
			continue;
		pos = line.find(',');
		if (pos == std::string::npos)
			continue;
		values = trim(line.substr(0, pos));
		Date *date = new Date(values);
		str = trim(line.substr(pos + 1));
		if (str.empty())
		{
			delete date;
			continue;
		}
		num = std::atof(str.c_str());
		this->_data.insert(std::pair<Date *, double>(date, num));
	}
	data.close();
}

void Btc::print_data()
{
	for (std::map<Date *, double>::iterator it = _data.begin(); it != _data.end(); ++it)
	{
		Date *date = it->first;
		double value = it->second;
		if (date)
		{
			std::cout << "Date: "
					  << date->getYear() << "-"
					  << (date->getMonth() < 10 ? "0" : "") << date->getMonth() << "-"
					  << (date->getDay() < 10 ? "0" : "") << date->getDay()
					  << ", Value: " << value << std::endl;
		}
	}
}
