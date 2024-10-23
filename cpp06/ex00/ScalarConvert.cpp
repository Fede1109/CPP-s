#include "ScalarConvert.hpp"

ScalarConvert::ScalarConvert(void) {}

ScalarConvert &ScalarConvert::operator=(const ScalarConvert &c)
{
	(void) c;
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

int check_int(const std::string &data)
{
	size_t i = 0;
	if (data[0] == '-' && data.size() > 1)
	{
		i = 1;
	}
	for (; i < data.size(); i++)
	{
		if ((!std::isdigit(data[i])) && data[i] != '.' && data[i] != 'f')
		{
			return 1;
		}
	}
	return 0;
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
		if (data == "nan" || data == "+inf" || data == "+inff" || data == "-inf" || data == "-inff")
			return IS_PLITERAL;
		if (check_int(data))
			return TYPE_UNRECOGNIZED;
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
	std::cout << "char: " + data << std::endl;
	std::cout << "int: " << data[0] - '0' << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(data[0] - '0') << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(data[0] - '0') << std::endl;
}

void convert_double(std::string data)
{
    double num_float = std::atof(data.c_str());
        std::cout << "char: '*'" << std::endl;
    if (num_float > std::numeric_limits<int>::max())
        std::cout << "int: inf" << std::endl;
    else if (num_float < std::numeric_limits<int>::min())
        std::cout << "int: -inf" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(round(num_float)) << std::endl;
    if (num_float > std::numeric_limits<double>::max())
    {
        std::cout << "double: inf" << std::endl;
        std::cout << "float: inff" << std::endl;
    }
    else if (num_float < -std::numeric_limits<double>::max())
    {
        std::cout << "double: -inf" << std::endl;
        std::cout << "float: -inff" << std::endl;
    }
    else
    {
        std::cout << "double: " << num_float << std::endl;
        if (num_float > std::numeric_limits<float>::max())
            std::cout << "float: inff" << std::endl;
        else if (num_float < -std::numeric_limits<float>::max())
            std::cout << "float: -inff" << std::endl;
        else
            std::cout << "float: " << static_cast<float>(num_float) << "f" << std::endl;
    }
}


void convert_float(std::string data)
{
	double long num_float = std::atof(data.c_str());
	std::cout << "char: '*'" << std::endl;
	std::cout << "int: " << roundf(num_float) << std::endl;
	std::cout << "double: " << num_float << std::endl;
	if (num_float > std::numeric_limits<float>::max())
        std::cout << "float: inff" << std::endl;
    else if (num_float < -std::numeric_limits<float>::max())
        std::cout << "float: -inff" << std::endl;
    else
        std::cout << "float: " << static_cast<float>(num_float) << "f" << std::endl;
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

int check_inf(std::string data)
{
	if (data == "inf" || data == "+inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: inf" << std::endl;
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
		return (1);
	}
	if (data == "inf" || data == "-inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: -inf" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return (1);
	}
	if (data == "inff" || data == "+inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: inf" << std::endl;
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
		return (1);
	}
	if (data == "inff" || data == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: -inf" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return (1);
	}
	return (0);
}
void handle_pseudo(std::string data)
{
	if (check_nan(data))
		return;
	if (check_inf(data))
		return;
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
	long n = std::atol(data.c_str());
	std::cout << "char: " << std::flush;
	if (n >= 32 && n <= 126)
		std::cout << static_cast<char>(n) << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	std::cout << "int: " << std::flush;
	if (n > std::numeric_limits<int>::max() || n < std::numeric_limits<int>::min())
		std::cout << "inf" << std::endl;
	else
		std::cout << n << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "double: " << int_to_double(n) << std::endl;
	std::cout << "float: " << int_to_float(n) << "f" << std::endl;
}

void print_conversion(int type, std::string data)
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
		convert_float(data);
		break;
	case 4:
		convert_double(data);
		break;
	case 5:
		handle_pseudo(data);
		break;
	default:
		std::cerr << "Usage -> ./converter <int, char, float or double>" << std::endl;
		break;
	}
}
void ScalarConvert::convert(std::string data)
{
	int type;
	type = get_type(data, data.size());
	// std::cout << "type: " << get_type(data, data.size()) << std::endl;
	// std::cout << std::numeric_limits<double>::max() << std::endl;
	print_conversion(type, data);
}
