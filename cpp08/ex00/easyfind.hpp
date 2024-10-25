#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>

class NotMatches : public std::exception
{
	public:
		const char * what (void) const throw()
		{
			return "No matches found.";
		}
};

template<typename T>
int	easyfind(T &arr, int num)
{
	for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{		
		if (arr[i] == num)
		{			
			return (num);
		}
	}
	throw NotMatches();
}

#endif