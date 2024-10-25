#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <algorithm>
#include <vector>
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
    for (typename T::iterator it = arr.begin(); it != arr.end(); ++it)
	{		
		if (*it == num)
		{			
			return (num);
		}
	}
	throw NotMatches();
}

#endif