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
		if (str.empty() || !date->getValid())
		{
			delete date;
			continue;
		}
		num = std::atof(str.c_str());
		this->_data.insert(std::pair<Date *, double>(date, num));
	}
	data.close();
}
Btc::Btc(std::string dbfile)
{
	std::ifstream data;
	std::string str;
	std::string values;
	size_t pos;
	double num;
	data.open(dbfile);
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
		if (str.empty() || !date->getValid())
		{
			delete date;
			continue;
		}
		num = std::atof(str.c_str());
		this->_data.insert(std::pair<Date *, double>(date, num));
	}
	data.close();
}
static bool checkFloat(std::string str, int n)
{
	int pointFlag = 0;

	for (int i = 0; i < n; i++)
	{
		if (!isdigit(str.c_str()[i]) && (str.c_str()[i] != '.'))
			return (false);
		if (str.c_str()[i] == '.')
			pointFlag++;
	}
	if (pointFlag > 1)
		return false;
	return (true);
}
Btc::Btc(Btc &b)
{
	*this = b;
}

Btc &Btc::operator=(Btc &b)
{
	if (this != &b)
	{
		for (std::map<Date *, double>::iterator it = this->_data.begin(); it != this->_data.end(); ++it)
			delete it->first;
		this->_data.clear();

		for (std::map<Date *, double>::const_iterator it = b._data.begin(); it != b._data.end(); ++it)
		{
			this->_data.insert(std::pair<Date *, double>(new Date(*it->first), it->second));
		}
	}
}

double Btc::searchDateValue(const Date &date) const
{
	double closestValue = 0.0;
	Date *closestDate = NULL;

	for (std::map<Date *, double>::const_iterator it = _data.begin(); it != _data.end(); ++it)
	{
		Date *currentDate = it->first;
		if (*currentDate > date)
			break;
		closestDate = currentDate;
		closestValue = it->second;
	}
	return closestDate ? closestValue : 0.0;
}

void Btc::showWealth(std::string inputFile)
{
	std::ifstream data;
	std::string str;
	std::string values;
	size_t pos;
	double num;
	int first = 0;

	data.open(inputFile);
	if (!data)
		throw FileError();

	for (std::string line; std::getline(data, line);)
	{
		line = trim(line);
		if (line.empty())
			continue;

		pos = line.find("|");
		if (pos == std::string::npos)
		{
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}

		values = trim(line.substr(0, pos));
		if (values.empty())
		{
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}

		Date date(values);
		if (!date.getValid())
		{
			if (first > 0)
				std::cout << "Error: invalid date => " << values << std::endl;
			first++;
			continue;
		}

		str = trim(line.substr(pos + 1));
		if (str.empty())
		{
			std::cout << "Error: empty or invalid value => " << line << std::endl;
			continue;
		}

		num = std::atof(str.c_str());
		if (!checkFloat(str, str.length()) || num < 0)
		{
			std::cerr << "Error: not a valid positive number => " << str << std::endl;
			continue;
		}
		if (num > 1000)
		{
			std::cerr << "Error: too large a number => " << str << std::endl;
			continue;
		}
		std::cout << values << " => " << num << " = " << num * this->searchDateValue(date) << std::endl;
		first++;
	}
	data.close();
}

void Btc::printData()
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
