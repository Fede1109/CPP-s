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

void Pmerge::printList(std::list<int> &lst)
{
    for (std::list<int>::iterator it = lst.begin(); it != lst.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}

bool checkSortedLst(std::list<int> &lst)
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
int findInsertIndexLst(std::list<int> &lst, int val)
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

std::list<int> Pmerge::sortList(std::list<int> &lst)
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
        int index = findInsertIndexLst(aux, *it);
        std::list<int>::iterator it2 = aux.begin();
        std::advance(it2, index);
        aux.insert(it2, *it);
    }

    return aux;
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
            pares.push_back(std::make_pair(first, NULL));
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
bool compareBySecond(const std::pair<unsigned int, unsigned int> &a,
                     const std::pair<unsigned int, unsigned int> &b)
{
    return a.second < b.second;
}

std::vector<int> Pmerge::sortVector(std::vector<int> &vec)
{
    std::vector<int> res, jacob, aux;

    if (checkSortedVector(vec))
        return vec;

    jacob = ft_jacobsthal(vec.size());
    std::vector<std::pair<unsigned int, unsigned int> > pares = createPairs(vec);
    for (std::vector<std::pair<unsigned int, unsigned int> > ::iterator it = pares.begin(); it != pares.end(); ++it)
    {
        std::cout << "[" << it->first << "," << it->second << "]" << std::endl;
    }
    std::cout << "---------------" << std::endl;
    std::sort(pares.begin(), pares.end(), compareBySecond);

    for (std::vector<std::pair<unsigned int, unsigned int> >::iterator it = pares.begin(); it != pares.end(); ++it)
    {
        std::cout << "[" << it->first << "," << it->second << "]" << std::endl;
    }
    std::cout << "---------------" << std::endl;
    //* Primer paso para guardar todo en un vector
    // TODO: con la sucesion de jacobsthal, pasar los menosres a aux donde correspondan

    for (std::vector<std::pair<unsigned int, unsigned int> >::iterator it = pares.begin(); it != pares.end(); ++it)
    {
        res.push_back(it->second);
    }
    for (std::vector<std::pair<unsigned int, unsigned int> >::iterator it = pares.begin(); it != pares.end(); ++it)
    {
        aux.push_back(it->first);
    }
    // printVector(jacob);
    std::cout << "----------" << std::endl;
    for (size_t i = 0; i < aux.size(); ++i)
    {
      for(size_t j = 0; j < jacob.size(); j++)
      {
        if (j == 0 && i == 0)
        {
            res.insert(res.begin(), aux[i]);
        }
        // else if (((int)(i + 1) == jacob[j]))
        // {
        //     //TODO:: REllenar desde ese indice hasta el anterior de jacob
        //     std::cout << i + 1 << " = " << jacob[j] <<  " --> " << aux[i] <<std::endl;
        // }
        // else if (j == (jacob.size() - 1))
        // {
        //     //TODO: RELLLENAR desde ese indice hasta el final
        // }
      }   
    }

    std::cout << jacob[jacob.size() -1] <<std::endl;
    std::cout << "----------" << std::endl;
    printVector(res);
    // std::cout << "---------------" << std::endl;
    return aux;
}
