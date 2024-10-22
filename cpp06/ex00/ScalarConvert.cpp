#include "ScalarConvert.hpp"

ScalarConvert::ScalarConvert(void) {}

ScalarConvert &ScalarConvert::operator=(const ScalarConvert &c)
{
	this->_c = c._c;
	this->_n_int = c._n_int;
	this->_n_float = c._n_float;
	this->_n_double = c._n_double;
	return *this;
}

ScalarConvert::ScalarConvert(const ScalarConvert &c)
{
	*this = c;
	return;
}
ScalarConvert::~ScalarConvert(void) {}

int check_args(std::string data)
{
	int count = 0;
	std::stringstream ss(data);
	char delimeter = ' ';
	std::string result;
	while (getline(ss, result, delimeter))
		count++;
	if (count > 1)
	{
		std::cerr << "Error: Usage-> ./convert <data>." << std::endl;
		return (1);
	}
	return (0);
}

int get_type(const std::string &data, int length)
{
	if (length == 1)
	{
		if (std::isdigit(data[0]))
			return IS_INT;
		else
			return IS_CHARACTER;
	}
	if (length > 1)
	{
		bool hasDecimalPoint = (data.find('.') != std::string::npos);
		bool hasF = (data.find('f') != std::string::npos);
		if (hasDecimalPoint)
			return hasF ? IS_FLOAT : IS_DOUBLE;
		else
			return IS_INT;
	}
	return TYPE_UNRECOGNIZED;
}

void convert_char(std::string data)
{	
	std::cout << "char: " + data <<std::endl;
	std::cout << "int: " << data[0] - '0'  << std::endl;
}

int check_nan(std::string data)
{
	if (data == "nan")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return (1);
	}
	return (0);
}
float int_to_float(long num)
{
	return (static_cast<float>((num)));
}

double int_to_double(long num)
{
	return (static_cast<double>((num)));
}
void convert_int(std::string data)
{
	if (check_nan(data))
		return ;
	/* TO-CHAR */
	long n = std::atol(data.c_str());
	std::cout << "char: " << std::flush;
    if (n > 2147483647 || n < -2147483648)
		std::cout << "Imposible" << std::endl;
	else if (n >= 32 && n <= 126)
		std::cout << static_cast<char>(n) << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	/* TO-INT */
	std::cout << "int: " << std::flush;
	if (n > 2147483647 || n < -2147483648)
		std::cout << "imposible" << std::endl;
	else
		std::cout << n << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "double: " << int_to_double(n) << std::endl;
	std::cout << "float: " << int_to_float(n) << "f" << std::endl;
}

void	print_conversion(int type, std::string data)
{
	switch (type)
	{
	case 1:
		convert_int(data);
		break;
	case 2:
		convert_char(data);
		break;
	case 3:		
		break;
	
	default:
		break;
	}
}
void convert(std::string data)
{
	int type;

	type = get_type(data, data.size());
	std::cout << "type: " << get_type(data, data.size()) << std::endl;
	print_conversion(type, data);
}
