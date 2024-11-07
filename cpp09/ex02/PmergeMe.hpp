#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <cctype> 

class Pmerge
{
	private:
		std::vector<int> _vec;
		std::list<int> _lst;
		Pmerge(void);
		Pmerge(Pmerge const &pm);
		Pmerge &operator=(Pmerge const &pm);
	public:
		~Pmerge(void);
		std::list<int> sortList(void);
		std::vector<int> sortVector(void);
		static void	printList(std::list<int>);
		static void	printVector(std::vector<int>);

};
#endif