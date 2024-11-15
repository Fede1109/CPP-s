#include "./PmergeMe.hpp"

Pmerge::~Pmerge(void) {}

Pmerge &Pmerge::operator=(Pmerge const &pm)
{
    (void)pm;
    return *this;
}

void Pmerge::printVector(std::vector<int> &vec)
{
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}

std::vector<int> ft_jacobsthal(int size)
{
    std::vector<int> jacob;
    int a = 1, b = 3;
    jacob.push_back(a);
    jacob.push_back(b);
    while (1)
    {
        long next = 2 * a + b;
        if (next > size / 2)
            break;
        a = b;
        b = next;
        jacob.push_back(next);
    }
    return jacob;
}

std::deque<int> ft_jacobsthalDeq(int size)
{
    std::deque<int> jacob;
    int a = 1, b = 3;
    jacob.push_back(a);
    jacob.push_back(b);
    while (1)
    {
        long next = 2 * a + b;
        if (next > size / 2)
            break;
        a = b;
        b = next;
        jacob.push_back(next);
    }
    return jacob;
}

void Pmerge::printDeque(std::deque<int> &deq)
{
    for (std::deque<int>::iterator it = deq.begin(); it != deq.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}

bool checkSortedDeq(std::deque<int> &deq)
{
    int aux;

    for (std::deque<int>::iterator it = deq.begin(); it != deq.end(); it++)
    {
        aux = *it;
        it++;
        if (it == deq.end())
            break;
        if (aux > *it)
            return (false);
        it--;
    }
    return (true);
}

bool checkSortedVector(std::vector<int> &vec)
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
bool compareBySecond(const std::pair<unsigned int, unsigned int> &a,
                     const std::pair<unsigned int, unsigned int> &b)
{
    return a.second < b.second;
}
int findInsertIndexLst(std::deque<int> &lst, int val)
{
    int min = 0, max = lst.size() - 1;
    std::deque<int>::iterator it;

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

int findInsertIndexVector(std::vector<int> &vec, int val)
{
    int min = 0, max = vec.size() - 1;
    while (min <= max)
    {
        int avg = (min + max) / 2;
        if (vec[avg] == val)
            return avg;
        else if (vec[avg] < val)
            min = avg + 1;
        else
            max = avg - 1;
    }
    return min;
}
std::deque<std::pair<unsigned int, unsigned int> > createPairsDeque(const std::deque<int> &deque)
{
    std::deque<std::pair<unsigned int, unsigned int> > pares;
    std::deque<int>::const_iterator it = deque.begin();
    while (it != deque.end())
    {
        int first = *it;
        ++it;
        if (it == deque.end())
        {
            break;
        }
        else
        {
            int second = *it;
            if (first < second)
            {
                pares.push_back(std::make_pair(first, second));
            }
            else
            {
                pares.push_back(std::make_pair(second, first));
            }
            ++it;
        }
    }
    return pares;
}

std::deque<int> Pmerge::sortdeque(std::deque<int> &deq)
{
    std::deque<int> res, jacob, aux;
    if (checkSortedDeq(deq))
        return deq;

    jacob = ft_jacobsthalDeq(deq.size());
    std::deque<std::pair<unsigned int, unsigned int> > pares = createPairsDeque(deq);
    std::sort(pares.begin(), pares.end(), compareBySecond);
    for (std::deque<std::pair<unsigned int, unsigned int> >::iterator it = pares.begin(); it != pares.end(); ++it)
    {
        res.push_back(it->second);
        aux.push_back(it->first);
    }
    
    for (size_t i = 0; i < jacob.size(); ++i)
    {
        int index = jacob[i] - 1;
        if (index < (int)aux.size())
        {    
            std::deque<int>::iterator pos = std::lower_bound(res.begin(), res.end(), aux[index]);
            res.insert(pos, aux[index]);
        }
    }

    for (int i = aux.size() - 1; i >= 0; --i)
    {
        bool alreadyInserted = false;
        for (size_t j = 0; j < jacob.size(); ++j)
        {
            if (jacob[j] - 1 == i)
            {
                alreadyInserted = true;
                break;
            }
        }
        if (!alreadyInserted)
        {
            std::deque<int>::iterator pos = std::lower_bound(res.begin(), res.end(), aux[i]);
            res.insert(pos, aux[i]);
        }
    }

    if (deq.size() % 2 != 0)
    {
        std::deque<int>::iterator pos = std::lower_bound(res.begin(), res.end(), deq.back());
        res.insert(pos, deq.back());
    }

    return res;
}
std::vector<std::pair<unsigned int, unsigned int> > createPairs(const std::vector<int> &vec)
{
    std::vector<std::pair<unsigned int, unsigned int> > pares;
    std::vector<int>::const_iterator it = vec.begin();
    while (it != vec.end())
    {
        int first = *it;
        ++it;
        if (it == vec.end())
        {
            break;
        }
        else
        {
            int second = *it;
            if (first < second)
            {
                pares.push_back(std::make_pair(first, second));
            }
            else
            {
                pares.push_back(std::make_pair(second, first));
            }
            ++it;
        }
    }
    return pares;
}


std::vector<int> Pmerge::sortVector(std::vector<int> &vec)
{
    std::vector<int> res, jacob, aux;

    if (checkSortedVector(vec))
        return vec;

    jacob = ft_jacobsthal(vec.size());
    std::vector<std::pair<unsigned int, unsigned int> > pares = createPairs(vec);
    // for (std::vector<std::pair<unsigned int, unsigned int> >::iterator it = pares.begin(); it != pares.end(); ++it)
    // {
    //     std::cout << "[" << it->first << "," << it->second << "]" << std::endl;
    // }
    // std::cout << "---------------" << std::endl;
    std::sort(pares.begin(), pares.end(), compareBySecond);

    // for (std::vector<std::pair<unsigned int, unsigned int> >::iterator it = pares.begin(); it != pares.end(); ++it)
    // {
    //     std::cout << "[" << it->first << "," << it->second << "]" << std::endl;
    // }
    // std::cout << "---------------" << std::endl;

    for (std::vector<std::pair<unsigned int, unsigned int> >::iterator it = pares.begin(); it != pares.end(); ++it)
    {
        res.push_back(it->second);
        aux.push_back(it->first);
    }
    // for (std::vector<std::pair<unsigned int, unsigned int> >::iterator it = pares.begin(); it != pares.end(); ++it)
    // {
    // }

    // std::cout << "----------" << std::endl;
    for (size_t i = 0; i < jacob.size(); ++i)
    {
        int index = jacob[i] - 1;
        if (index < (int)aux.size())
        {    
            std::vector<int>::iterator pos = std::lower_bound(res.begin(), res.end(), aux[index]);
            res.insert(pos, aux[index]);
        }
    }
    for (int i = aux.size() - 1; i >= 0; --i)
    {
        bool alreadyInserted = false;
        for (size_t j = 0; j < jacob.size(); ++j)
        {
            if (jacob[j] - 1 == i)
            {
                alreadyInserted = true;
                break;
            }
        }
        if (!alreadyInserted)
        {
            std::vector<int>::iterator pos = std::lower_bound(res.begin(), res.end(), aux[i]);
            res.insert(pos, aux[i]);
        }
    }
if (vec.size() % 2 != 0)
{
    std::vector<int>::iterator pos = std::lower_bound(res.begin(), res.end(), vec.back());
    res.insert(pos, vec.back());
}
    return res;
}

