#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template<typename T>
void iter(T *arr, int len, void (*f) (T const &))
{
	if (!arr || !fun)
		return ;
	for (int i = 0; i < len; i++)
	{
		f(arr[i]);
	}
}
#endif