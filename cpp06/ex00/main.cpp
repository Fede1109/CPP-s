#include "ScalarConvert.hpp"

int main (int argc, char **argv)
{	
	if (argc != 2)
	{
		std::cerr << "Error: Usage-> ./convert <data>." << std::endl;
		return (1);
	}	
	if (check_args(argv[1]))
		return (1);
	ScalarConvert::convert(argv[1]);
	return (0);
}