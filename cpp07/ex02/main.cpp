#include "Array.hpp"

int main (void)
{
	Array<int> data(5);
	Array<int> arr(3);
	data[2] = 2;

	std::cout << data[2] << std::endl;
	try
	{
		data[10];
		std::cout << data[10] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
	return (0);
}