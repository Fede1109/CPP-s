#ifndef DATE_HPP
#define DATE_HPP
#include <iostream>
#include <cstdlib>

class Date
{
private:
	int _year;
	int _month;
	int _day;
	bool _isValid;
	Date(void);

public:
	Date(std::string str);
	Date &operator=(Date &d);
	bool getValid(void);
	Date(Date &d);
	~Date(void);
	int getYear() const { return _year; }
	int getMonth() const { return _month; }
	int getDay() const { return _day; }
	bool operator<(const Date& other) const
	{
		if (_year < other._year) return true;
		if (_year > other._year) return false;
		if (_month < other._month) return true;
		if (_month > other._month) return false;
		return _day < other._day;
	}
	bool operator>(const Date &other) const
	{
		return other < *this;
	}
};
#endif