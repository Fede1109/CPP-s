#include "./PmergeMe.hpp"

Pmerge::~Pmerge(void) {}

void Pmerge::printVector(std::vector<int> vec)
{
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void Pmerge::printList(std::list<int> lst)
{
	for (std::list<int>::iterator it = lst.begin(); it != lst.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}