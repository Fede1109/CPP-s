#include "Date.hpp"

static std::string trim(const std::string &str)
{
	size_t start = str.find_first_not_of(" \t\n\r\f\v");
	if (start == std::string::npos)
		return "";
	size_t end = str.find_last_not_of(" \t\n\r\f\v");
	return str.substr(start, end - start + 1);
}
static bool checkDigit(const std::string &str, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (!isdigit(str.c_str()[i]))
			return (false);
	}
	return (true);
}

static bool isLeapYear(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

static bool isValidDate(int year, int month, int day)
{
	const int daysInMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (month < 1 || month > 12)
		return false;
	int maxDays = daysInMonth[month];
	if (month == 2 && isLeapYear(year))
		maxDays = 29;
	return (day >= 1 && day <= maxDays);
}

Date::Date(void) : _year(0), _month(0), _day(0), _isValid(false) {}

Date::Date(Date &d)
{
	*this = d;
}

Date::~Date(void)
{
}

Date &Date::operator=(Date &d)
{
	if (this != &d)
	{
		this->_year = d._year;
		this->_month = d._month;
		this->_day = d._day;
		this->_isValid = d._isValid;
	}
	return *this;
}

Date::Date(std::string dstr) : _year(0), _month(0), _day(0), _isValid(false)
{
	std::string str = trim(dstr);
	size_t pos = str.find('-');
	if (pos == std::string::npos || !checkDigit(str.substr(0, pos), pos))
	{
		_isValid = false;
		return;
	}
	_year = std::atoi(str.substr(0, pos).c_str());

	std::string monthStr = str.substr(pos + 1);
	pos = monthStr.find('-');
	if (pos == std::string::npos || !checkDigit(monthStr.substr(0, pos), pos))
	{
		_isValid = false;
		return;
	}
	_month = std::atoi(monthStr.substr(0, pos).c_str());

	if (!checkDigit(monthStr.substr(pos + 1), monthStr.length() - pos - 1))
	{
		_isValid = false;
		return;
	}
	_day = std::atoi(monthStr.substr(pos + 1).c_str());

	_isValid = isValidDate(_year, _month, _day);
}

bool Date::getValid(void)
{
	return _isValid;
}