
#include "easyfind.hpp"
int main(void)
{
	int arr [5] = { 1, 2, 3, 4, 5};

	std::cout << "Found: " << ::easyfind(arr, 2) << std::endl;
	try
	{
		std::cout << "Found: " << ::easyfind(arr, 20) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}