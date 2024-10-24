#include "iter.hpp"

template <typename T>
void add_color(T const &t)
{    
    const std::string blue = "\033[35m";
    const std::string reset = "\033[0m";
    
    std::cout << blue << t << reset << std::endl;
}


int main(void)
{
	int arr [5] = { 1, 2 ,3, 4, 5};
	std::string arr2[3] = {
		"hola",
		"como",
		"estas"
	};
	::iter(arr, 5, add_color);
	std::cout << "----------------------" << std::endl;
	::iter(arr2, 5, add_color);
	return (0);
}