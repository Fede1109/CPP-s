#include "Array.hpp"

int main(void)
{
	Array<int> data(5);
	for (size_t i = 0; i < 5; i++)
	{
		data[i] = i;
	}
	
	Array<int> tmp = data;	

	for (size_t i = 0; i < 5; i++)
	{
		if (data[i] != tmp[i])
		{
			std::cerr << "Didn't save the same value!!" << std::endl;
			break;
		}
	}
	data[2] = 20;
	for (size_t i = 0; i < 5; i++)
	{
		std::cout << "Data["<< i << "]: " << data[i] << std::endl;
		std::cout << "tmp ["<< i << "]: "  << tmp[i] << std::endl;
		if (data[i] != tmp[i])
		{
			std::cerr << "Didn't save the same value!!" << std::endl;
			break;
		}
	}

	std::cout << data[2] << std::endl;
	try
	{
		data[10];
		std::cout << data[10] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}