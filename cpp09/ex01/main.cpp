#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error" << std::endl;
		return (1);
	}
	try
	{
		RPN a(argv[1]);
	}
	catch (const RPN::Error& exc)
	{
		std::cout << exc.what() << std::endl;
	}
	return (0);
}
