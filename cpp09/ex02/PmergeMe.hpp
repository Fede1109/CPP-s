#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <cctype> 
#include <climits>
class Pmerge
{
	private:

		Pmerge(void);
		Pmerge(Pmerge const &pm);
		Pmerge &operator=(Pmerge const &pm);
	public:
		~Pmerge(void);
		static std::list<int> sortList(std::list<int>& lst);
		static std::vector<int> sortVector(std::vector <int>& vect);
		static void	printList(std::list<int>& lst);
		static void	printVector(std::vector<int>& vect);

};
#endif