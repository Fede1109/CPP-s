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
int	get_type(std::string data);
void print_conversion(int type, std::string data);
void convert_int(std::string data);
enum DataType {
    TYPE_UNRECOGNIZED = 0,
    IS_INT = 1,
    IS_CHARACTER = 2,
    IS_FLOAT = 3,
    IS_DOUBLE = 4,
	IS_PLITERAL = 5
};
#endif
