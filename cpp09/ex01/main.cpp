#include "RPN.hpp"


//TODO: refactorizar funciones de operadores y hacer mas pruebas
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
	catch (char const *exc)
	{
		std::cout << exc << std::endl;
	}
	return (0);
}