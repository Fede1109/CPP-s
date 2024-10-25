#include "Array.hpp"

int main (void)
{
	Array<int> data(5);
	Array<int> tmp = data;
	Array<int> arr(3);
	data[2] = 2;

	for (size_t i = 0; i < 5; i++)
	{
		if (data[i] != tmp[i])
		{
			std::cout << data[i] << std::endl;
			std::cout << tmp[i] << std::endl;
			std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
		}
	}
	
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