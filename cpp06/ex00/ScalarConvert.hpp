#ifndef CONVERT_HPP
#define CONVERT_HPP
#include <iostream>
#include <sstream>
#include <cstdlib> 
#include <limits>
#include <iomanip>

class ScalarConvert
{

	
private:
	char _c;
	int _n_int;
	float _n_float;
	double _n_double;

public:
	ScalarConvert(void);
	ScalarConvert(const ScalarConvert &c);
	~ScalarConvert();
	ScalarConvert &operator=(const ScalarConvert &c);
};
int check_args(std::string data);
void convert(std::string data);
int	get_type(std::string data);
void print_conversion(int type, std::string data);
void convert_int(std::string data);
enum DataType {
    TYPE_UNRECOGNIZED = 0,
    IS_INT = 1,
    IS_CHARACTER = 2,
    IS_FLOAT = 3,
    IS_DOUBLE = 4
};
#endif
