#ifndef DATE_HPP
#define DATE_HPP
#include <iostream>

class Date
{
	private:
		int _year;
		int _month;
		int _day;
		bool	_isValid;
		Date(void);
	public:
		Date(std::string str);
		Date &operator=(Date &d);
		Date(Date &d);
		~Date(void);


};
#endif