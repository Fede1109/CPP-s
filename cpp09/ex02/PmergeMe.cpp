#include "./PmergeMe.hpp"

Pmerge::~Pmerge(void) {}

Pmerge &Pmerge::operator=(Pmerge const &pm)
{
    (void) pm;
    return *this;
}


void Pmerge::printVector(std::vector<int>& vec)
{
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void Pmerge::printList(std::list<int>& lst)
{
	for (std::list<int>::iterator it = lst.begin(); it != lst.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

bool checkSortedLst(std::list<int> lst)
{
	int aux;

	for (std::list<int>::iterator it = lst.begin(); it != lst.end(); it++)
	{
		aux = *it;
		it++;
		if (it == lst.end())
			break;
		if (aux > *it)
			return (false);
		it--;
	}
	return (true);
}
bool checkSortedVector(std::vector<int> vec)
{
	int aux;

	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
	{
		aux = *it;
		it++;
		if (it == vec.end())
			break;
		if (aux > *it)
			return (false);
		it--;
	}
	return (true);
}
int binaryLst(std::list<int>& lst, int val)
{
    int min = 0, max = lst.size() - 1;
    std::list<int>::iterator it;
    
    while (min <= max) 
    {
        int avg = (min + max) / 2;
        it = lst.begin();
        std::advance(it, avg);
        
        if (*it == val)
            return avg;
        else if (*it < val)
            min = avg + 1;
        else
            max = avg - 1;
    }
    return min;
}

int binaryVector(std::vector<int>& vec, int val)
{
    int min = 0, max = vec.size() - 1;
    std::vector<int>::iterator it;
    
    while (min <= max) 
    {
        int avg = (min + max) / 2;
        it = vec.begin();
        std::advance(it, avg);
        
        if (*it == val)
            return avg;
        else if (*it < val)
            min = avg + 1;
        else
            max = avg - 1;
    }
    return min;
}

std::list<int> Pmerge::sortList(std::list<int> lst)
{
    std::list<int> order, smalls, aux;
    if (checkSortedLst(lst))
        return lst;
   
    std::list<int>::iterator it = lst.begin();
    while (it != lst.end())
    {
        int first = *it;
        ++it;
        if (it == lst.end())
        {
            smalls.push_back(first);
        }
        else
        {
            int second = *it;
            if (first < second)
            {
                smalls.push_back(first);
                order.push_back(second);
            }
            else
            {
                order.push_back(first);
                smalls.push_back(second);
            }
            ++it;
        }
    }
    if (order.size() > 1)
        aux = sortList(order);
    else
        aux = order;

    for (std::list<int>::iterator it = smalls.begin(); it != smalls.end(); ++it)
    {
        int index = binaryLst(aux, *it);
        std::list<int>::iterator it2 = aux.begin();
        std::advance(it2, index);
        aux.insert(it2, *it);
    }

    return aux;
}

std::vector<int> Pmerge::sortVector(std::vector<int> vec)
{
    std::vector<int> order, smalls, aux;

	if (checkSortedVector(vec))
		return (vec);
	    std::vector<int>::iterator it = vec.begin();
    while (it != vec.end())
    {
        int first = *it;
        ++it;
        if (it == vec.end())
        {
            smalls.push_back(first);
        }
        else
        {
            int second = *it;
            if (first < second)
            {
                smalls.push_back(first);
                order.push_back(second);
            }
            else
            {
                order.push_back(first);
                smalls.push_back(second);
            }
            ++it;
        }
    }
    if (order.size() > 1)
        aux = sortVector(order);
    else
        aux = order;

    for (std::vector<int>::iterator it = smalls.begin(); it != smalls.end(); ++it)
    {
        int index = binaryVector(aux, *it);
        std::vector<int>::iterator it2 = aux.begin();
        std::advance(it2, index);
        aux.insert(it2, *it);
    }

    return aux;
}