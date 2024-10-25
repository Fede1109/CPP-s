
#include "easyfind.hpp"
int main(void)
{
	std::vector<int> arr;

	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(4);
	arr.push_back(5);
	std::cout << "Found: " << ::easyfind(arr, 2) << std::endl;
	try
	{
		std::cout << "Found: " << ::easyfind(arr, 20) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}