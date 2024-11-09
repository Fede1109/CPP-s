#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cerr << "Error: Usage-> ./PmergeMe <numbers>" << std::endl;
		return 1;
	}

	std::vector<int> vector, resVec;
	std::list<int> lst, resLst;

	try
	{
		for (int i = 1; i < argc; i++)
		{
			std::string arg = argv[i];
			for (size_t i = 0; i < arg.size(); i++)
			{
				char c = arg[i];
				if (!std::isdigit(c))
				{
					throw std::runtime_error("Error: Todos los argumentos deben ser números enteros positivos.");
				}
			}

			long check = std::strtol(argv[i], nullptr, 10);

			if (check > INT_MAX || check <= 0)
				throw std::runtime_error("Error: Número fuera del rango permitido o no positivo");

			int number = static_cast<int>(check);
			vector.push_back(number);
			lst.push_back(number);
		}
		std::clock_t startTimeLst, startTimeVector, endTimeLst, endTimeVector;
		std::cout << "Before -> vector: ";
		Pmerge::printVector(vector);
		std::cout << "Before -> list: ";
		Pmerge::printList(lst);
		startTimeLst = std::clock();
		resLst = Pmerge::sortList(lst);
		endTimeLst = (std::clock() - startTimeLst) * 1000000 / CLOCKS_PER_SEC;
		startTimeVector = std::clock();
		resVec = Pmerge::sortVector(vector);
		endTimeVector = (std::clock() - startTimeVector) * 1000000 / CLOCKS_PER_SEC;
		std::cout << "After -> list: ";
		Pmerge::printList(resLst);
		std::cout << "After -> vector: ";
		Pmerge::printVector(resVec);
		std::cout << "Time to process a range of " << argc - 1 << " elements with std::list : " << endTimeLst << " us" << std::endl;
		std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector : " << endTimeVector << " us" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
		return 1;
	}

	return 0;
}
