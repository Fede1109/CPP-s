#ifndef CONVERT_HPP
#define CONVERT_HPP
#include <iostream>
#include <sstream>
#include <cstdlib> 
#include <limits>
#include <iomanip>
#include <cmath>

class ScalarConvert
{

	
private:
	ScalarConvert(void);
	ScalarConvert(const ScalarConvert &c);
	ScalarConvert &operator=(const ScalarConvert &c);

public:
	~ScalarConvert();
	static void convert(std::string data);
};
int check_args(std::string data);
int get_type(const std::string &data, int length);
void print_conversion(int type, std::string data);
int check_int(const std::string &data);
void convert_int(std::string data);
void convert_char(std::string data);
void convert_double(std::string data);
void convert_float(std::string data);
int check_nan(std::string data);
int check_inf(std::string data);
void handle_pseudo(std::string data);
float int_to_float(long num);
double int_to_double(long num);

enum DataType {
    TYPE_UNRECOGNIZED = 0,
    IS_INT = 1,
    IS_CHARACTER = 2,
    IS_FLOAT = 3,
    IS_DOUBLE = 4,
	IS_PLITERAL = 5
};
#endif
